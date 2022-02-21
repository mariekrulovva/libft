/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcriston <bcriston@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 21:50:13 by bcriston          #+#    #+#             */
/*   Updated: 2021/10/24 13:34:18 by bcriston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_len(long num)
{
	int	len;

	len = 0;
	if (num < 0)
	{
		len++;
		num = num * (-1);
	}
	while (num / 10 > 0)
	{
		len++;
		num = num / 10;
	}
	return (++len);
}

static void	ft_putnb(long int num, char *str, int *len)
{
	if (num > 9)
	{
		ft_putnb(num / 10, str, len);
		ft_putnb(num % 10, str, len);
	}
	else
		str[(*len)++] = num + '0';
}

char	*ft_itoa(int n)
{
	long int	num;
	char		*str;
	int			len;

	num = n;
	len = count_len(num);
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	len = 0;
	if (num < 0)
	{
		num = num * (-1);
		str[len] = '-';
		len++;
	}
	ft_putnb(num, str, &len);
	return (str);
}
