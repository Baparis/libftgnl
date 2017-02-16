/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baparis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 12:50:20 by baparis           #+#    #+#             */
/*   Updated: 2016/11/16 15:45:31 by baparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned long int	i;
	unsigned char		*c1;
	unsigned char		*c2;

	i = 0;
	if (n < 1 && s1 == 0 && s2 == 0)
		return (0);
	c1 = (unsigned char*)s1;
	c2 = (unsigned char*)s2;
	while (n--)
	{
		if (c1[i] != c2[i])
			return (((unsigned char*)c1)[i] - ((unsigned char*)c2)[i]);
		i++;
	}
	return (0);
}
