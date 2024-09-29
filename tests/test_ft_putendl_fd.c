/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putendl_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 11:59:12 by zslowian          #+#    #+#             */
/*   Updated: 2024/03/09 12:26:48 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_ft_putendl_fd(void)
{
	printf("\nTesting ft_putendl_fd\n");
	printf("Empty string:\n");
	ft_putendl_fd("", 1);
	printf("Some string in printf\n");
	ft_putendl_fd("Some string in ft_putendl_fd", 1);
	ft_putendl_fd("String\t with \n non-printables\n", 1);
}
