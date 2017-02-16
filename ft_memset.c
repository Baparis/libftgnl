/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baparis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 17:16:48 by baparis           #+#    #+#             */
/*   Updated: 2016/11/12 17:03:25 by baparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tmp;

	tmp = (unsigned char*)s;
	if (n == 0)
		return (s);
	while (n--)
	{
		*tmp = (unsigned char)c;
		if (n)
			tmp++;
	}
	return (s);
}
