/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 14:29:14 by zslowian          #+#    #+#             */
/*   Updated: 2024/03/08 21:42:11 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_ft_isascii(void)
{
	int	result;

	printf("\nTesting ft_isascii\n");
	result = ft_isascii((int) '9');
	printf("1. Character \'9\' ft_isascii result: %d\n", result);
	result = ft_isascii((int) 'l');
	printf("2. Character \'l\' ft_isascii result: %d\n", result);
	result = ft_isascii((int) 'A');
	printf("3. Character \'A\' ft_isascii result: %d\n", result);
	result = ft_isascii((int) 'a');
	printf("4. Character \'a\' ft_isascii result: %d\n", result);
	result = ft_isascii((int) ' ');
	printf("5. Character \' \' ft_isascii result: %d\n", result);
	result = ft_isascii((int)EOF);
	printf("6. Character \'EOF\' ft_isascii result: %d\n", result);
}
