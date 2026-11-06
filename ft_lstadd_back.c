/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblmouh <ayblmouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 11:49:21 by ayblmouh          #+#    #+#             */
/*   Updated: 2026/11/02 16:40:52 by ayblmouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst  || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}

	tmp = ft_lstlast(*lst);	
	tmp->next = new;
}

#include <stdio.h>

int	main()
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;

	head = malloc(sizeof(t_list));
	node1 = malloc(sizeof(t_list));
	
	head->content = "42";
	head->next = node1;
	
	node1->content = "1337";
	node1->next = NULL;

	node2 = ft_lstnew("21");

	ft_lstadd_back(&head, node2);


	printf("%s\n", (char *)head->content);
	printf("%s\n", (char *)head->next->content);
	printf("%s\n", (char *)head->next->next->content);
	
}

/*
	t_list 	*node;

	node = NULL;
	ft_lstadd_back(&node, ft_lstnew(ft_strdup("hello")));
*/
