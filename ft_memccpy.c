/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baparis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 16:17:20 by baparis           #+#    #+#             */
/*   Updated: 2016/11/21 22:14:53 by baparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned long int	i;

	i = 0;
	if (n < 1)
		return (0);
	while (i < n && ((unsigned char*)src)[i] != (unsigned char)c)
	{
		((unsigned char*)dest)[i] = ((unsigned char*)src)[i];
		i++;
	}
	if (((unsigned char*)src)[i] == (unsigned char)c && i < n)
	{
		((unsigned char*)dest)[i] = ((unsigned char*)src)[i];
		return ((char*)dest + i + 1);
	}
	return (NULL);
}
