/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baparis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 17:18:42 by baparis           #+#    #+#             */
/*   Updated: 2016/11/22 20:57:57 by baparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	res;
	size_t	lendst;
	size_t	lensrc;

	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (dst && src)
	{
		if (size <= ft_strlen(dst))
			return (ft_strlen(src) + size);
		else
		{
			res = size - ft_strlen(dst) - 1;
			ft_strncat(dst, src, res);
			return (lendst + lensrc);
		}
	}
	return (0);
}
