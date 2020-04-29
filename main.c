#include <stdio.h>
#include "get_next_line.h"

int		main(void)
{
	int		file;
	int		ret;
	char	*line;

	file = 0;
	while ((ret = get_next_line(file, &line)) == 1)
	{
		printf("[%d] |%s|\n", ret, line);
		free(line);
		line = NULL;
	}
	printf("[%d] |%s|\n", ret, line);
	free(line);
	line = NULL;
}
