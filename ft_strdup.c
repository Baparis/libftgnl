/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baparis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 14:54:46 by baparis           #+#    #+#             */
/*   Updated: 2016/11/14 13:47:27 by baparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		i;

	i = -1;
	if (!(dest = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (0);
	while (s[++i])
		dest[i] = s[i];
	if (i)
		dest[i] = '\0';
	return (dest);
}
