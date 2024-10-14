/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_min.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 21:56:30 by zslowian          #+#    #+#             */
/*   Updated: 2024/10/14 22:05:45 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_ft_min(void)
{
	int	a;
	int	b;

	a = 5;
	b = 7;
	ft_printf("\nTesting ft_min(int a, int b)\n\n");
	if (ft_min(a, b) != 5)
		ft_printf("Test 1 failed!\n");
	if (ft_min(b, a) != 5)
		ft_printf("Test 2 failed!\n");
	a = 7;
	if (ft_min(b, a) != 7)
		ft_printf("Test 3 failed!\n");
}
