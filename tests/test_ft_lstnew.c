/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstnew.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:41:27 by zslowian          #+#    #+#             */
/*   Updated: 2024/09/29 16:18:33 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "test_libft.h"

void	test_ft_lstnew(void)
{
	t_list	*my_list;

	my_list = ft_lstnew((void *)42);
	printf("\nTesting ft_lstnew\n");
	printf("\n1. Testing one element list\n");
	if (my_list->content != (void *)42 || my_list->next != 0)
		printf("1. Creating one element list failed");
}