/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 19:21:46 by ybayart           #+#    #+#             */
/*   Updated: 2019/11/13 20:12:42 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int		main(int argc, char **argv)
{
	char	*line;
	int		file;

	file = open(argv[1], O_RDWR);
	while (get_next_line(file, &line))
	{
		printf("%s\n",line);
		free(line);
	}
	while(1);
}
