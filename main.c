/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 19:21:46 by ybayart           #+#    #+#             */
/*   Updated: 2019/11/10 01:12:01 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int		main(void)
{
	char	*line;
	int		file;
	int		i;

//	file = open("get_next_line.c", O_RDWR);
	file = 0;
	i = -1;
	while (get_next_line(file, &line) == 1)
	{
		printf("%s\n", line);
//		printf("-> line\n");
	}
//	close(file);
//	free(line);
//	while(1);
}
