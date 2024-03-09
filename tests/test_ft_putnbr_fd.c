/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putnbr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 12:13:45 by zslowian          #+#    #+#             */
/*   Updated: 2024/03/09 12:25:36 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_ft_putnbr_fd(void)
{
	int	fd;

	fd = 1;
	printf("\nTesting ft_putendl_fd\n");
	printf("Printing integer 2:\n");
	ft_putnbr_fd(2, fd);
	ft_putchar_fd('\0', fd);
	printf("Printing integer 27:\n");
	ft_putnbr_fd(27, 1);
	ft_putchar_fd('\0', fd);
	printf("Printing integer -89:\n");
	ft_putnbr_fd(-89, 1);
	ft_putchar_fd('\0', fd);
	printf("Printing integer 0:\n");
	ft_putnbr_fd(0, 1);
	ft_putchar_fd('\0', fd);
}
