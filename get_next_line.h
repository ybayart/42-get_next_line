/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 21:35:29 by ybayart           #+#    #+#             */
/*   Updated: 2019/11/09 23:40:47 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct	s_gnl
{
	int		loop;
	int		i;
	long	readen;
	char	*file;
	char	*buf;
}				t_gnl;

int				get_next_line(int fd, char **line);
char			*ft_strjoin(char *s1, char *s2);
size_t			ft_strlen(char *s);

#endif
