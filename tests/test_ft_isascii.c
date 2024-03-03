/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 14:29:14 by zslowian          #+#    #+#             */
/*   Updated: 2024/03/03 22:42:01 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_ft_isascii(void)
{
	int	result;

	printf("\nTesting ft_isascii\n");
	result = ft_isascii((unsigned char) '9');
	printf("1. Character \'9\' ft_isascii result: %d\n", result);
	result = ft_isascii((unsigned char) 'l');
	printf("2. Character \'l\' ft_isascii result: %d\n", result);
	result = ft_isascii((unsigned char) 'A');
	printf("3. Character \'A\' ft_isascii result: %d\n", result);
	result = ft_isascii((unsigned char) 'a');
	printf("4. Character \'a\' ft_isascii result: %d\n", result);
	result = ft_isascii((unsigned char) ' ');
	printf("5. Character \' \' ft_isascii result: %d\n", result);
	result = ft_isascii((unsigned char)EOF);
	printf("6. Character \'EOF\' ft_isascii result: %d\n", result);
}
