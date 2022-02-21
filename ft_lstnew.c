/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcriston <bcriston@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 21:20:22 by bcriston          #+#    #+#             */
/*   Updated: 2021/10/23 21:23:20 by bcriston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*ls_new;

	ls_new = malloc(sizeof(t_list));
	if (ls_new == NULL)
		return (NULL);
	ls_new->content = content;
	ls_new->next = NULL;
	return (ls_new);
}
