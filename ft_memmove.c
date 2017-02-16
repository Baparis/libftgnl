/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baparis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 11:13:08 by baparis           #+#    #+#             */
/*   Updated: 2016/11/16 18:05:16 by baparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*c2;
	unsigned char	*c1;

	c2 = (unsigned char*)src;
	c1 = (unsigned char*)dest;
	if (dest > src)
	{
		c1 = c1 + n;
		c2 = c2 + n;
		while (n--)
			*--c1 = *--c2;
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
