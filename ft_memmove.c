/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcriston <bcriston@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:38:56 by bcriston          #+#    #+#             */
/*   Updated: 2021/10/24 13:51:24 by bcriston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*text;
	unsigned const char	*text2;

	text = dst;
	text2 = src;
	i = 0;
	if (src == 0 && dst == 0)
		return (0);
	if (text <= text2)
	{
		while (i < len)
		{
			text[i] = text2[i];
			i++;
		}
	}
	else
	{
		i = len ;
		while (i-- > 0)
			text[i] = text2[i];
	}
	return (dst);
}
