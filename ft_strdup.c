/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcriston <bcriston@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 20:14:46 by bcriston          #+#    #+#             */
/*   Updated: 2021/10/24 14:17:38 by bcriston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, char *src);

char	*ft_strdup(char *src)
{
	char	*s;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (src[len])
		len++;
	s = malloc(len + 1);
	if (s == NULL)
		return (NULL);
	ft_strcpy(s, src);
	return (s);
}

char	*ft_strcpy(char *dest, char *src)
{
	char	temp;
	int		count;

	count = 0;
	temp = src[0];
	while (temp != '\0')
	{
		dest[count] = src[count];
		count++;
		temp = src[count];
	}
	dest[count] = '\0';
	return (dest);
}
