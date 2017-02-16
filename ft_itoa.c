/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baparis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 18:45:37 by baparis           #+#    #+#             */
/*   Updated: 2016/11/23 15:18:11 by baparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		size;

	size = ft_intlen(n);
	if (!(str = (char *)malloc(sizeof(*str) * (size + 1))))
		return (NULL);
	if (n < 0)
		*str = '-';
	if (n == 0)
	{
		*str = '0';
		return (str);
	}
	str[size--] = '\0';
	while (n != 0)
	{
		if (n < 0)
			str[size--] = '0' - n % 10;
		else
			str[size--] = '0' + n % 10;
		n = n / 10;
	}
	return (str);
}
