/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstlast.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 19:04:34 by zslowian          #+#    #+#             */
/*   Updated: 2024/09/28 21:26:56 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_ft_lstlast(void)
{
	t_list	*my_list;
	t_list	*result;

	my_list = NULL;
	printf("\nTesting ft_lstlast\n");
	printf("\n1. Testing empty list\n");
	result = ft_lstlast(my_list);
	if (result != 0)
		printf("\tTesting empty list failed\n");
	printf("\n2. Testing one element list\n");
	ft_lstadd_front(&my_list, ft_lstnew((void *)1));
	result = ft_lstlast(my_list);
	if (result->content != (void *)1)
		printf("\tTesting one element list failed\n");
	printf("\n3. Testing two element list\n");
	ft_lstadd_front(&my_list, ft_lstnew((void *)2));
	result = ft_lstlast(my_list);
	if (result->content != (void *)1)
		printf("\tTesting two element list failed\n");
	printf("\n3. Last pointer on the list\n");
	if (ft_lstlast(my_list)->next != 0)
		printf("\tLast pointer of the list is not 0\n");
	free(result);
	free(my_list);
}
