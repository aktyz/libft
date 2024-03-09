/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:43:11 by zslowian          #+#    #+#             */
/*   Updated: 2024/03/09 12:15:51 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

/* TODO enrich test cases and correct with a fresh head on Sunday
	// test_ft_memset();
	*/

int	main(void)
{
	printf("\n*** STARTING TESTS ***\n\n");
	test_ft_putchar_fd();
	test_ft_putstr_fd();
	test_ft_putendl_fd();
	test_ft_putnbr_fd();
	printf("\nAll tests passed!\n\n");
	return (0);
}
