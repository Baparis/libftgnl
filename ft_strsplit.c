/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baparis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 17:36:50 by baparis           #+#    #+#             */
/*   Updated: 2016/11/23 15:15:43 by baparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countchars(char const *s, char c)
{
	int	cpt;

	cpt = 0;
	while (s[cpt] && s[cpt] != c)
		cpt++;
	return (cpt);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**tmp;
	int		i;
	int		nb_words;

	i = 0;
	if (!s)
		return (NULL);
	nb_words = ft_countwords(s, c);
	if (!(tmp = (char **)malloc(sizeof(*tmp) * (nb_words + 1))))
		return (NULL);
	tmp[nb_words] = 0;
	while (i < nb_words)
	{
		while (*s && *s == c)
			s++;
		tmp[i] = ft_strsub(s, 0, ft_countchars(s, c));
		while (*s && *s != c)
			s++;
		i++;
	}
	return (tmp);
}
