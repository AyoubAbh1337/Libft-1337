/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblmouh <ayblmouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 08:42:43 by ayblmouh          #+#    #+#             */
/*   Updated: 2026/11/09 14:27:14 by ayblmouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	del(void *x)
{
	free(x);
}
*/
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*next;

	if (!lst || !del)
		return ;
	tmp = *lst;
	while (tmp)
	{
		del(tmp->content);
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
	*lst = NULL;
}
/*
#include <stdio.h>

int	main()
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;

	head = NULL;
	
	node1 = ft_lstnew(ft_strdup("Hello"));
	node2 = ft_lstnew(ft_strdup("Anoual"));

	if (!node1 || !node2)
		return (1);

	head = node1;
	node1->next = node2;
	
	ft_lstclear(&head, del);
	return (0);
//	printf("%s\n", (char *)head->content);
//	printf("%s\n", (char *)head->next->content);
}*/
