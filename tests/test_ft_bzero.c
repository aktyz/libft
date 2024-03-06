/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 22:11:10 by zslowian          #+#    #+#             */
/*   Updated: 2024/03/06 22:11:10 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_ft_bzero(void)
{
	char	array[25];
	int		i;

	printf("\nTesting ft_bzero\n");
	strcpy(array, "Something not important\n");
	ft_bzero(array, 0);
	printf("\n%s\n", array);
	i = 5;
	ft_bzero(array, i);
	while (i > 0)
	{
		if (array[i - 1] != '\0')
			printf("Test failed, on array index %d, found char %c\n",
				i - 1, array[i - 1]);
		i--;
	}
	printf("Testing ft_bzero ended.\n");
}
