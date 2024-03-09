/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putnbr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 12:13:45 by zslowian          #+#    #+#             */
/*   Updated: 2024/03/09 15:22:15 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_ft_putnbr_fd(void)
{
	int	fd;

	fd = 1;
	printf("\nTesting ft_putendl_fd\n");
	printf("\nPrinting integer 2:\n");
	ft_putnbr_fd(2, fd);
	ft_putchar_fd('\0', fd);
	printf("\nPrinting integer 27:\n");
	ft_putnbr_fd(27, fd);
	ft_putchar_fd('\0', fd);
	printf("\nPrinting integer -89:\n");
	ft_putnbr_fd(-89, fd);
	ft_putchar_fd('\0', fd);
	printf("\nPrinting integer 0:\n");
	ft_putnbr_fd(0, fd);
	ft_putchar_fd('\0', fd);
	printf("\nPrinting integer -2147483648:\n");
	ft_putnbr_fd(-2147483648, fd);
	ft_putchar_fd('\0', fd);
	printf("\nPrinting integer 2147483647:\n");
	ft_putnbr_fd(2147483647, fd);
	ft_putchar_fd('\0', fd);
}
