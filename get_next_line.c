/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 21:30:18 by ybayart           #+#    #+#             */
/*   Updated: 2019/11/10 20:43:54 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_newline(char *s)
{
	int		i;

	i = 0;
	while (*(s + i))
	{
		if (*(s + i) == '\n' || *(s + i) == '\0')
			return (i);
		i++;
	}
	return (-1);
}

char	*ft_reading(int fd, char *file, long *readen)
{
	char	*tmp;
	char	*buf;

	if ((buf = (char*)malloc(BUFFER_SIZE + 1)) == NULL)
		return (NULL);
	while ((*readen = read(fd, buf, BUFFER_SIZE)) > 0)
	{
		buf[*readen] = '\0';
		tmp = file;
		file = ft_strjoin(file, buf);
		free(tmp);
		if (get_newline(buf) != -1)
			break ;
	}
	free(buf);
	if (*readen == -1)
		return (NULL);
	return (file);
}

int		ft_setmem(t_gnl data, char **file, char **mem)
{
	data.loop = 0;
	while (*(*file + data.loop) != '\n' && *(*file + data.loop) != '\0')
		data.loop++;
	if (data.readen == 0 && *mem[0] == '\0' && data.loop == 0)
	{
		free(*mem);
		return (0);
	}
	if (!(*mem = (char*)malloc(ft_strlen(*file) - data.loop)))
		return (-1);
	*(*file + data.loop) = '\0';
	data.i = 0;
	while (*(*file + data.loop + ++data.i) != '\0')
		*(*mem + data.i - 1) = *(*file + data.loop + data.i);
	*(*mem + data.i - 1) = '\0';
	return (1);
}

int		get_next_line(int fd, char **line)
{
	static char	*mem;
	t_gnl		data;

	if (!line)
		return (-1);
	if (mem == NULL)
	{
		if ((mem = (char*)malloc(2)) == NULL)
			return (-1);
		mem[0] = 0;
	}
	data.file = mem;
	if (get_newline(data.file) == -1)
		if ((data.file = ft_reading(fd, data.file, &data.readen)) == NULL)
		{
			free(data.file);
			return (-1);
		}
	if ((data.loop = ft_setmem(data, &data.file, &mem)) == -1)
		return (-1);
	*line = data.file;
	return (data.loop);
}
