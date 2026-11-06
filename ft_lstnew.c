/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                   +:+ +:+         +:+      */
/*   By: ayblmouh <ayblmouh@student.1337.ma>       #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/29 16:59:42 by ayblmouh         #+#    #+#              */
/*   Updated: 2026/10/31 11:04:17 by ayblmouh         ###   ########.fr       */
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
/*
#include <stdio.h>

int	main(void)
{
	t_list	*head;
	t_list	*node1;

	node1 = ft_lstnew("hi how are you");

	head = node1;

	printf("%s\n", (char *)node1->content);
	printf("%s\n", (char *)head->content);

	free(node1);
}*/
