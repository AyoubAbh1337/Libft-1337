/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   task.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblmouh <ayblmouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 21:03:47 by ayblmouh          #+#    #+#             */
/*   Updated: 2026/10/30 21:28:22 by ayblmouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main()
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	int	num1 = 42;
	int	num2 = 100;
	

	node1 = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));


	head = node1;

	node1->content = &num1;
	node1->next = node2;

	node2->content = &num2;
	node2->next = NULL;

	printf("%d\n", *(int *)node1->content);
	printf("%d\n", *(int *)node2->content);

	//printf("%d", ft_lstsize(head));
	
}
