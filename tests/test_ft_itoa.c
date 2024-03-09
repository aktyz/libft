/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 16:12:58 by zslowian          #+#    #+#             */
/*   Updated: 2024/03/09 21:57:37 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_ft_itoa(void)
{
	char	*result;

	printf("\nTesting ft_itoa\n");
	printf("\nPrinting integer 2:\n");
	result = ft_itoa(2);
	printf("%s\n", result);
	free(result);
	printf("\nPrinting integer 27:\n");
	result = ft_itoa(27);
	printf("%s\n", result);
	free(result);
	printf("\nPrinting integer -89:\n");
	result = ft_itoa(-89);
	printf("%s\n", result);
	free(result);
	printf("\nPrinting integer 0:\n");
	result = ft_itoa(0);
	printf("%s\n", result);
	free(result);
	printf("\nPrinting integer -2147483648:\n");
	result = ft_itoa(-2147483648);
	printf("%s\n", result);
	free(result);
	printf("\nPrinting integer 2147483647:\n");
	result = ft_itoa(2147483647);
	ft_putstr_fd(result, 1);
	free(result);
}
