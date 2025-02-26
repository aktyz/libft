/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstadd_back.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 14:26:16 by zslowian          #+#    #+#             */
/*   Updated: 2024/12/11 15:33:32 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_ft_lstadd_back(void)
{
	t_list	*list;
	t_list	*new;
	
	list = NULL;
	new = malloc(sizeof(t_list));
	new->content = "ABC";
	new->lst_size = 1;
	ft_lstadd_back(&list, new);
	new = malloc(sizeof(t_list));
	new->content = "YXA";
	new->lst_size = 1;
	ft_lstadd_back(&list, new);
	new = malloc(sizeof(t_list));
	new->content = "Blah";
	new->lst_size = 1;
	ft_lstadd_back(&list, new);
	ft_lstclear(&list, free);
}