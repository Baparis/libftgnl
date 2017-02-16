/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baparis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 17:41:36 by baparis           #+#    #+#             */
/*   Updated: 2016/11/22 18:50:32 by baparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = (char*)s;
	while (tmp[i] != (char)c && tmp[i])
		i++;
	if (0 == c)
		return (tmp + i);
	if (!tmp[i])
		return (0);
	return (tmp + i);
}
