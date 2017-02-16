/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baparis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 17:56:13 by baparis           #+#    #+#             */
/*   Updated: 2016/11/22 18:50:17 by baparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = (char*)s;
	while (tmp[i])
		i++;
	while (tmp[i] != (char)c && i >= 0)
		i--;
	if (i < 0)
		return (0);
	return (tmp + i);
}
