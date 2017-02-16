/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baparis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 16:30:32 by baparis           #+#    #+#             */
/*   Updated: 2017/01/12 15:40:49 by baparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	if (!(tmp = (char *)malloc(sizeof(*tmp) * (ft_strlen(s1)
						+ ft_strlen(s2) + 1))))
		return (NULL);
	ft_strcpy(tmp, s1);
	tmp = tmp + ft_strlen(s1);
	ft_strcpy(tmp, s2);
	tmp = tmp - (ft_strlen(s1));
	return (tmp);
}
