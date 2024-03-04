/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:43:11 by zslowian          #+#    #+#             */
/*   Updated: 2024/03/04 21:11:07 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

int	main(void)
{
	printf("*** STARTING TESTS ***\n");
	printf("sizeof(char) = %lu\n\n", sizeof(char));
	test_ft_strnstr();
	return (0);
}
