/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:43:11 by zslowian          #+#    #+#             */
/*   Updated: 2024/03/05 21:51:59 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

int	main(void)
{
	printf("*** STARTING TESTS ***\n");
	printf("sizeof(char) = %lu\n\n", sizeof(char));
	// enrich test cases and correct with a fresh head on Sunday
	// test_ft_strnstr();
	test_ft_strlcpy();
	return (0);
}
