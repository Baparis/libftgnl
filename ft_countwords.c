/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baparis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 15:13:33 by baparis           #+#    #+#             */
/*   Updated: 2016/11/23 15:14:14 by baparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countwords(char const *s, char c)
{
	int	cpt;

	cpt = 0;
	if (!s)
		return (cpt);
	while (*s)
	{
		if (*s != c)
		{
			cpt++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (cpt);
}
