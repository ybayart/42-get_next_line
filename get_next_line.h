/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 18:32:17 by ybayart           #+#    #+#             */
/*   Updated: 2019/11/17 18:32:21 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *src);
void	*ft_memcpy(void *dest, const void *src, size_t n);
char	*ft_strncat(char *dest, const char *src, size_t len);
size_t	ft_strlen(const char *src);
int		get_next_line(int fd, char **line);

#endif
