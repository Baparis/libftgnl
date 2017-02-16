/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baparis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 13:49:02 by baparis           #+#    #+#             */
/*   Updated: 2016/11/23 15:01:42 by baparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*tmp;

	i = -1;
	if (s == NULL || !f)
		return (NULL);
	if ((tmp = (char*)malloc(sizeof(char) * ft_strlen(s) + 1)))
	{
		while (s[++i])
			tmp[i] = f(i, s[i]);
		tmp[i] = '\0';
		return (tmp);
	}
	return (0);
}
