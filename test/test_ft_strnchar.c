/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnchar.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 00:42:55 by zslowian          #+#    #+#             */
/*   Updated: 2024/12/08 00:52:33 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_ft_strnchar(void)
{
	char	my_string[20];
	int		result;

	ft_strlcpy(my_string, "", 0);
	result = ft_strnchar(my_string, ' ');
	if (result != 0)
		ft_printf("Test 1 on empty string failed\n");
	ft_strlcpy(my_string, "abc yz zyta blah", ' ');
	result = ft_strnchar(my_string, ' ');
	if (result != 3)
		ft_printf("Test 2 failed\n");
}
