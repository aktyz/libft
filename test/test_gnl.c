/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_gnl.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 17:21:38 by zslowian          #+#    #+#             */
/*   Updated: 2024/10/03 19:26:52 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h> // open

void	test_gnl(void)
{
	int fd;
	char *next_line;
	int	count;

	count = 1;
	fd = open("./test/examples/short2.txt", O_RDONLY);
	if (fd == -1)
			ft_printf("Error opening file!");
	next_line = get_next_line(fd);
	ft_printf("\nLine %d:\n\"%s\"\n", count, next_line);
	free(next_line);
	while(!(next_line == NULL))
	{
		next_line = get_next_line(fd);
		ft_printf("\nLine %d:\n\"%s\"\n", count, next_line);
		count++;
		free(next_line);
	}
	close(fd);	
}
