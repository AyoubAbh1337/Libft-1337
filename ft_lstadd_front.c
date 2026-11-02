/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblmouh <ayblmouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 14:12:55 by ayblmouh          #+#    #+#             */
/*   Updated: 2026/10/31 11:18:54 by ayblmouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

#include <stdio.h>

int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;

	node1 = ft_lstnew("hello");
	node2 = ft_lstnew("world");
	if (!node1 || !node2)
	{
		free(node1);
		free(node2);
		return (1);
	}
	head = node1;
	ft_lstadd_front(&head, node2);
	printf("%s\n", (char *)head->content);
	printf("%s\n", (char *)head->next->content);
	

	printf("%d", ft_lstsize(head));
	free(node1);
	free(node2);
	return (0);
}
