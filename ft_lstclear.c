/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 21:42:04 by zslowian          #+#    #+#             */
/*   Updated: 2024/09/26 21:42:04 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*head;

	if(!*lst)
		return ;
	while (*lst)
	{
		head = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = head;
	}
	*lst = 0;
}
