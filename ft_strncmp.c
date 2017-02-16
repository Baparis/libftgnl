/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baparis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 19:13:51 by baparis           #+#    #+#             */
/*   Updated: 2016/11/16 17:37:28 by baparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char				*c1;
	char				*c2;
	unsigned long int	i;

	i = 0;
	c1 = (char*)s1;
	c2 = (char*)s2;
	while (c1[i] == c2[i] && c1[i] && c2[i] && i < n)
		i++;
	if (i == (size_t)n)
		return (((unsigned char*)c1)[i - 1] - ((unsigned char*)c2)[i - 1]);
	return (((unsigned char*)c1)[i] - ((unsigned char*)c2)[i]);
}
