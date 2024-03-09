/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putchar_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 11:21:39 by zslowian          #+#    #+#             */
/*   Updated: 2024/03/09 12:25:11 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_ft_putchar_fd(void)
{
	printf("\nTesting ft_putchar_fd\n");
	ft_putchar_fd('Z', 1);
	ft_putchar_fd('y', 1);
	ft_putchar_fd('t', 1);
	ft_putchar_fd('k', 1);
	ft_putchar_fd('a', 1);
	ft_putchar_fd('\n', 1);
}
