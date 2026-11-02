/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   task.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblmouh <ayblmouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 21:03:47 by ayblmouh          #+#    #+#             */
/*   Updated: 2026/10/31 10:18:35 by ayblmouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main()
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	int	num1 = 42;
	int	num2 = 100;
	int	num3 = 56;

	node1 = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));
	node3 = malloc(sizeof(t_list));


	head = node1;

	node1->content = &num1;
	node1->next = node2;

	node2->content = &num2;
	node2->next = node3;

	node3->content = &num3;
	node3->next = NULL;

	printf("%d\n", *(int *)node1->content);
	printf("%d\n", *(int *)node2->content);

	printf("%d", ft_lstsize(head));
	
}
