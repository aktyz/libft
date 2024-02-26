/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:49:29 by zslowian          #+#    #+#             */
/*   Updated: 2024/02/26 18:03:52 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

extern int	ft_isalpha(unsigned char c);

void	test_ft_isalpha(void)
{
	int	result;

	printf("\nTesting ft_isalpha\n");
	result = ft_isalpha((unsigned char) '9');
	printf("1. Character \'9\' is_alpha result: %d\n", result);
	result = ft_isalpha((unsigned char) 'l');
	printf("2. Character \'l\' is_alpha result: %d\n", result);
	result = ft_isalpha((unsigned char) 'A');
	printf("3. Character \'A\' is_alpha result: %d\n", result);
	result = ft_isalpha((unsigned char) 'a');
	printf("4. Character \'a\' is_alpha result: %d\n", result);
	result = ft_isalpha((unsigned char) ' ');
	printf("5. Character \' \' is_alpha result: %d\n", result);
}
