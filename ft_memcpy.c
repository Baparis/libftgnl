/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baparis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 19:36:20 by baparis           #+#    #+#             */
/*   Updated: 2016/11/21 22:14:45 by baparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned long int	i;

	i = 0;
	if (n < 1)
		return (dest);
	while (i < n)
	{
		((char*)dest)[i] = ((char*)src)[i];
		i++;
	}
	return (dest);
}
