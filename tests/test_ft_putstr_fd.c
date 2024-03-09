/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putstr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 11:39:11 by zslowian          #+#    #+#             */
/*   Updated: 2024/03/09 11:50:09 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_ft_putstr_fd(void)
{
	printf("\nTesting ft_strchr\n");
    printf("Empty string:\n");
	ft_putstr_fd("", 1);
    printf("Some string in printf\n");
    ft_putstr_fd("Some string in ft_putstr_fd", 1);
    ft_putstr_fd("String\t with \n non-printables\n", 1);
}