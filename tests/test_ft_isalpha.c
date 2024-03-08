/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:49:29 by zslowian          #+#    #+#             */
/*   Updated: 2024/03/08 21:41:05 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_ft_isalpha(void)
{
	int	result;

	printf("\nTesting ft_isalpha\n");
	result = ft_isalpha((int) '9');
	printf("1. Character \'9\' ft_isalpha result: %d\n", result);
	result = ft_isalpha((int) 'l');
	printf("2. Character \'l\' ft_isalpha result: %d\n", result);
	result = ft_isalpha((int) 'A');
	printf("3. Character \'A\' ft_isalpha result: %d\n", result);
	result = ft_isalpha((int) 'a');
	printf("4. Character \'a\' ft_isalpha result: %d\n", result);
	result = ft_isalpha((int) ' ');
	printf("5. Character \' \' ft_isalpha result: %d\n", result);
	result = ft_isalpha((int)EOF);
	printf("6. Character \'EOF\' ft_isalpha result: %d\n", result);
}
