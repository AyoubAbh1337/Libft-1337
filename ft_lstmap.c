/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   code.c                                            :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ayblmouh <marvin@42.fr>                   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/04 10:36:15 by ayblmouh         #+#    #+#              */
/*   Updated: 2026/11/04 21:15:24 by ayblmouh        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*new_list;
	void	*cont;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		cont = f(lst->content);
		new_node = ft_lstnew(cont);
		if (new_node)
			ft_lstadd_back(&new_list, new_node);
		else
		{
			del(cont);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		lst = lst->next;
	}
	return (new_list);
}
