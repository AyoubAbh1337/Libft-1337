/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblmouh <ayblmouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 11:25:18 by ayblmouh          #+#    #+#             */
/*   Updated: 2026/11/09 11:37:31 by ayblmouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (lst)
	{
		tmp = lst;
		while (tmp)
		{
			if (tmp->next == NULL)
				return (tmp);
			tmp = tmp->next;
		}
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*head;	
	t_list	*node1;
	t_list	*node2;

	node1 = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));

	head = node1;


	node1->content = "hi";
	node1->next = node2;

	node2->content = "hola";
	node2->next = NULL;

	printf("%p\n", ft_lstlast(head));
	printf("%p\n", node2);
}*/
