/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                   +:+ +:+         +:+      */
/*   By: ayblmouh <ayblmouh@student.1337.ma>       #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/29 16:59:42 by ayblmouh         #+#    #+#              */
/*   Updated: 2026/11/09 09:53:59 by ayblmouh         ###   ########.fr       */
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
	t_list	*node;

	head = NULL;

	node = ft_lstnew(ft_strdup("Hello ayb"));
	if (!node)
		return (1);

	head = node;

	printf("%s", (char *)head->content);

	free(node);
	free(head->content);
	return (0);
}*/
