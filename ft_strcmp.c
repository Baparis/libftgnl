/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baparis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 19:04:21 by baparis           #+#    #+#             */
/*   Updated: 2016/11/16 13:45:29 by baparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	char	*c1;
	char	*c2;
	int		i;

	i = 0;
	c1 = (char*)s1;
	c2 = (char*)s2;
	while (c1[i] == c2[i] && c1[i] && c2[i])
		i++;
	return (((unsigned char*)c1)[i] - ((unsigned char*)c2)[i]);
}
