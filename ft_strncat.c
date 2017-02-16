/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baparis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 17:01:31 by baparis           #+#    #+#             */
/*   Updated: 2016/11/21 22:49:07 by baparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (n-- && src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}
