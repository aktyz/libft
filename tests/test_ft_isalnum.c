/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 14:13:26 by zslowian          #+#    #+#             */
/*   Updated: 2024/03/03 20:39:36 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_ft_isalnum(void)
{
	int	result;

	printf("\nTesting ft_isalnum\n");
	result = ft_isalnum((unsigned char) '9');
	printf("1. Character \'9\' ft_isalnum result: %d\n", result);
	result = ft_isalnum((unsigned char) 'l');
	printf("2. Character \'l\' ft_isalnum result: %d\n", result);
	result = ft_isalnum((unsigned char) 'A');
	printf("3. Character \'A\' ft_isalnum result: %d\n", result);
	result = ft_isalnum((unsigned char) 'a');
	printf("4. Character \'a\' ft_isalnum result: %d\n", result);
	result = ft_isalnum((unsigned char) ' ');
	printf("5. Character \' \' ft_isalnum result: %d\n", result);
	result = ft_isalnum((unsigned char)EOF);
	printf("6. Character \'EOF\' ft_isalnum result: %d\n", result);
}
