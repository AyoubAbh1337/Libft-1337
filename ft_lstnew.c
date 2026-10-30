/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                   +:+ +:+         +:+      */
/*   By: ayblmouh <ayblmouh@student.1337.ma>       #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/29 16:59:42 by ayblmouh         #+#    #+#              */
/*   Updated: 2026/10/30 20:46:52 by ayblmouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

#include <stdio.h>

int	main(void)
{
	t_list	*head;

	head = NULL;

	head = ft_lstnew("hello");
	printf("%s", (char *)head->content);
/*

	int n = 13;
	t_list	*node = ft_lstnew(&n);

//	node->content = 42;

	int *val = node->content;
	printf("%d", *val);*/
}
