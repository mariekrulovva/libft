/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcriston <bcriston@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 19:39:30 by bcriston          #+#    #+#             */
/*   Updated: 2021/10/24 15:03:52 by bcriston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	unsigned int	count1;
	unsigned int	i;

	count1 = 0;
	if (!*s2)
		return ((char *)s1);
	while (s1[count1] && (size_t)count1 < len)
	{
		if (s1[count1] == s2[0])
		{
			i = 1;
			while (s2[i] && s1[count1 + i] == s2[i] && \
			(size_t)(count1 + i) < len)
				++i;
			if (s2[i] == '\0')
				return ((char *)&s1[count1]);
		}
		++count1;
	}
	return (0);
}
