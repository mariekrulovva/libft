/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcriston <bcriston@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 11:20:57 by bcriston          #+#    #+#             */
/*   Updated: 2021/10/24 13:38:03 by bcriston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*beg;

	if (lst && new)
	{
		beg = *lst;
		if (beg == NULL)
			*lst = new;
		else
		{
			while (beg->next)
				beg = beg->next;
			beg->next = new;
		}
	}
}
