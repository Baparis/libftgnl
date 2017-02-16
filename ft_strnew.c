/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baparis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 13:19:42 by baparis           #+#    #+#             */
/*   Updated: 2016/11/23 14:58:31 by baparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char			*dst;
	unsigned int	i;

	i = 0;
	if ((dst = (char*)malloc(sizeof(char) * size + 1)))
	{
		while (i != size)
			dst[i++] = '\0';
		dst[i++] = '\0';
		return (dst);
	}
	return (NULL);
}
