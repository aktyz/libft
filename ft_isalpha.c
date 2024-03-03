/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zslowian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:36:41 by zslowian          #+#    #+#             */
/*   Updated: 2024/02/26 18:05:10 by zslowian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(unsigned char c)
{
	int	lower_case;
	int	upper_case;

	lower_case = (c > 96 && c < 123);
	upper_case = (c > 64 && c < 91);
	return (lower_case || upper_case);
}