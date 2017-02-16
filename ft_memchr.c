/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baparis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 11:37:45 by baparis           #+#    #+#             */
/*   Updated: 2016/11/12 17:03:12 by baparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	cc;
	int				i;

	cc = c;
	ptr = (unsigned char*)s;
	i = 0;
	while (n--)
	{
		if (ptr[i] == cc)
			return (ptr + i);
		i++;
	}
	return (0);
}
