/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblmouh <ayblmouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 11:32:10 by ayblmouh          #+#    #+#             */
/*   Updated: 2026/11/03 12:06:28 by ayblmouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list	*node;

	if (!lst)
		return (NULL);
	
	node = ft_lstnew(NULL);
	if (!node)
		return (NULL);
	while(lst)
	{
		node->content = f(lst->content);
		lst = lst->next;
		content = content->next;
	}
	return (node);
}
