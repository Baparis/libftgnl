/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baparis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 09:32:01 by baparis           #+#    #+#             */
/*   Updated: 2016/11/25 16:15:09 by baparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			i;
	long int	mem;
	int			sign;

	i = 0;
	mem = 0;
	sign = 1;
	while (str[i] == '\n' || str[i] == ' ' || str[i] == '\t' || str[i] == '\v'\
			|| str[i] == '\r' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		mem = mem * 10 + (str[i++] - '0');
	return (mem * sign);
}
