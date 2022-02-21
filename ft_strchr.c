/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcriston <bcriston@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:56:26 by bcriston          #+#    #+#             */
/*   Updated: 2021/10/24 14:52:30 by bcriston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ss;

	ss = (char *)s;
	if ((unsigned char)c == 0)
		return (ss + ft_strlen(ss));
	while (*ss && *ss != (unsigned char)c)
		ss++;
	if (*ss && *ss == (unsigned char)c)
		return (ss);
	return (NULL);
}
