/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 17:23:46 by zslowian          #+#    #+#             */
/*   Updated: 2024/12/11 17:52:54 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_ft_split(void)
{
	char	**result;
	char	**tmp;

	printf("\nTesting ft_split\n");
	result = ft_split("9 5 33", ' ');
	tmp = result;
	while (*tmp)
	{
		ft_printf("%s\n", *tmp);
		tmp++;
	}
	ft_clear_char_array(&result, 3);
	result = ft_split("", ' ');
	tmp = result;
	ft_clear_char_array(&result, 0);
}
