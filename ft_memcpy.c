/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcriston <bcriston@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:38:06 by bcriston          #+#    #+#             */
/*   Updated: 2021/10/24 13:46:31 by bcriston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*text;
	unsigned const char	*text2;

	text = dst;
	text2 = src;
	i = 0;
	if (src == 0 && dst == 0)
		return (0);
	while (i < n)
	{
		text[i] = text2[i];
		i++;
	}
	return (dst);
}
