/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 21:39:57 by ybayart           #+#    #+#             */
/*   Updated: 2019/11/18 19:12:28 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

typedef struct	s_gnl
{
	char			str[((BUFFER_SIZE > 0) ? BUFFER_SIZE + 1 : 1)];
	int				fd;
	int				i;
	int				len;
	int				l_line;
	int				tmp;
}				t_gnl;

int				get_next_line(int fd, char **line);
char			*ft_substr(char const *s, int start, int len);

#endif
