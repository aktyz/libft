/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 12:12:32 by zslowian          #+#    #+#             */
/*   Updated: 2024/03/03 20:40:42 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_ft_isdigit(void)
{
	int	result;

	printf("\nTesting ft_isdigit\n");
	result = ft_isdigit((unsigned char) '9');
	printf("1. Character \'9\' ft_isdigit result: %d\n", result);
	result = ft_isdigit((unsigned char) 'l');
	printf("2. Character \'l\' ft_isdigit result: %d\n", result);
	result = ft_isdigit((unsigned char) 'A');
	printf("3. Character \'A\' ft_isdigit result: %d\n", result);
	result = ft_isdigit((unsigned char) 'a');
	printf("4. Character \'a\' ft_isdigit result: %d\n", result);
	result = ft_isdigit((unsigned char) ' ');
	printf("5. Character \' \' ft_isdigit result: %d\n", result);
	result = ft_isdigit((unsigned char)EOF);
	printf("6. Character \'EOF\' ft_isdigit result: %d\n", result);
}
