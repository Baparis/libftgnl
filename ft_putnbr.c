/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baparis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 16:12:06 by baparis           #+#    #+#             */
/*   Updated: 2016/11/12 16:49:25 by baparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long int	u;

	u = n;
	if (u < 0)
	{
		ft_putchar('-');
		u = -u;
	}
	if (u > 9)
		ft_putnbr(u / 10);
	ft_putchar((u % 10) + '0');
}