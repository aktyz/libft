/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 18:10:42 by zslowian          #+#    #+#             */
/*   Updated: 2024/03/24 19:08:37 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_ft_strncmp(void)
{
	int	result;

	printf("\nTesting ft_strncmp\n");
	result = ft_strncmp("test\200", "test\0", 6);
    printf("test\200\n");
	printf("Result should be 128 but is %d\n", result);
    result = ft_strncmp("\2", "\0", 3);
    printf("Result should be ? but is %d\n", result);
}