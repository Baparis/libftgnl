/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baparis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 17:19:38 by baparis           #+#    #+#             */
/*   Updated: 2016/11/23 15:29:22 by baparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_gti(char *s)
{
	int	i;

	i = 0;
	while (s[i] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	return (i);
}

static int	ft_getj(char *s, int j)
{
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
		j--;
	return (j);
}

char		*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		count;
	char	*dest;

	count = 0;
	i = 0;
	if (s == NULL)
		return (NULL);
	i = ft_gti((char*)s);
	if (!(s[i]))
	{
		if (!(dest = (char*)malloc(sizeof(char))))
			return (0);
		dest[0] = '\0';
		return (dest);
	}
	j = ft_strlen(s) - 1;
	j = ft_getj((char*)s, j);
	if (!(dest = (char*)malloc(sizeof(char) * (j - i) + 2)))
		return (0);
	while (i <= j)
		dest[count++] = s[i++];
	dest[count] = '\0';
	return (dest);
}
