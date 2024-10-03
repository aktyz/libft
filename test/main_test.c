/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:43:11 by zslowian          #+#    #+#             */
/*   Updated: 2024/10/03 16:37:53 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

/* TODO enrich test cases and correct with a fresh head on Sunday
	// test_ft_memset();
	*/

int	main(void)
{
	printf("\n*** STARTING TESTS ***\n\n");
	test_char();
	test_percent();
	test_string();
	testPointer();
	test_minus();
	test_single_integer();
	test_dot_category();
	test_minus_category();
	test_space_category();
	test_plus_category();
	printf("\nAll tests completed!\n\n");
	return (0);
}
