/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baparis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 21:10:54 by baparis           #+#    #+#             */
/*   Updated: 2016/11/25 11:29:18 by baparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (alst)
	{
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = NULL;
	}
}
