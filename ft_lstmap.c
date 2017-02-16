/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baparis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 21:44:40 by baparis           #+#    #+#             */
/*   Updated: 2016/11/23 16:17:17 by baparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *newlst;

	if (lst)
	{
		newlst = f(lst);
		newlst->next = ft_lstmap(lst->next, f);
		return (newlst);
	}
	return (NULL);
}
