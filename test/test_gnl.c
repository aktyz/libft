/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_gnl.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 17:21:38 by zslowian          #+#    #+#             */
/*   Updated: 2024/12/08 00:09:12 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h> // open

void	test_ft_read_to_buffer(void);

void	test_gnl(void)
{
	int fd;
	char *next_line;
	int	count;

	count = 1;
	printf("\nTesting get_next_line\n");
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

void	test_ft_read_to_buffer(void)
{
	char	*buffer;
	int		fd;

	printf("\nTesting ft_read_to_buffer\n");
	buffer = NULL;
	fd = open("./test/examples/do_not_modify.txt", O_RDONLY);
	if (fd == -1)
	{
		ft_printf("Error opening file!");
		return ;
	}
	buffer = ft_read_to_buffer(buffer, fd, '\n');
	if (ft_strncmp((const char *) buffer, "My short example\n\nso", 21))
		{
			ft_printf("Test 1 - Error with the function\n");
		}
	free(buffer);
	close(fd);
}
