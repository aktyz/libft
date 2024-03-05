/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:43:11 by zslowian          #+#    #+#             */
/*   Updated: 2024/03/05 22:18:03 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

int	main(void)
{
	printf("*** STARTING TESTS ***\n\n");
	//printf("sizeof(char) = %lu\n\n", sizeof(char));
	// enrich test cases and correct with a fresh head on Sunday
	// test_ft_strnstr();
	test_ft_strlcpy();
	test_ft_strdup();
	printf("\nAll tests passed!\n\n");
	return (0);
}
