/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcriston <bcriston@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:54:52 by bcriston          #+#    #+#             */
/*   Updated: 2021/10/21 21:46:50 by bcriston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	nachalo(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i] && set[j])
	{
		if (s1[i] != set[j])
		{
			while (s1[i] != set[j])
			{
				if (set[j + 1] == '\0')
					return (i);
				j++;
			}
		}
		else
		{
			i++;
			j = 0;
		}
	}
	return (i);
}

static size_t	konec(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(s1) - 1;
	j = 0;
	while (s1[i] && set[j])
	{
		if (s1[i] != set[j])
		{
			while (s1[i] != set[j])
			{
				if (set[j + 1] == '\0')
					return (i);
				j++;
			}
		}
		else
		{
			i--;
			j = 0;
		}
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	indexnachalo;
	size_t	indexkonec;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	indexnachalo = nachalo(s1, set);
	if (s1[indexnachalo] == '\0')
		return (ft_strdup(""));
	indexkonec = konec(s1, set);
	str = malloc(indexkonec - indexnachalo + 2);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (indexnachalo <= indexkonec)
		str[i++] = s1[indexnachalo++];
	str[i] = '\0';
	return (str);
}
