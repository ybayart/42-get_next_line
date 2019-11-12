/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 19:21:46 by ybayart           #+#    #+#             */
/*   Updated: 2019/11/10 20:37:04 by ybayart          ###   ########.fr       */
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
	int		state;

//	file = open("get_next_line.c", O_RDWR);
	file = 0;
	i = -1;
	while ((state = get_next_line(file, &line)) == 1)
	{
		printf("%d: %s\n", state, line);
		free(line);
//		printf("-> line\n");
	}
//	close(file);
//	free(line);
	while(1);
}
