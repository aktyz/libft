/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 19:10:21 by zslowian          #+#    #+#             */
/*   Updated: 2024/03/23 19:22:59 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_ft_atoi(void)
{
	int	result;

	printf("\nTesting ft_atoi\n");
	printf("\nPrinting integer 2:\n");
	result = ft_atoi("\t\v2");
	printf("%d\n", result);
	printf("\nPrinting integer 27:\n");
	result = ft_atoi("27");
	printf("%d\n", result);
	printf("\nPrinting integer -89:\n");
	result = ft_atoi("-89");
	printf("%d\n", result);
	printf("\nPrinting integer 0:\n");
	result = ft_atoi("+0");
	printf("%d\n", result);
	printf("\nPrinting integer -2147483648:\n");
	result = ft_atoi("\n-2147483648");
	printf("%d\n", result);
	printf("\nPrinting integer 2147483647:\n");
	result = ft_atoi("  2147483647");
	printf("%d\n", result);
}
