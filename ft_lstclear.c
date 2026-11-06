/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblmouh <ayblmouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 08:42:43 by ayblmouh          #+#    #+#             */
/*   Updated: 2026/11/03 09:15:12 by ayblmouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

// دالة حذف مخصصة لمحتوى العقد (بما أننا سنستخدم strdup سنقوم بـ free للمحتوى)
void    del_content(void *content)
{
    free(content);
}

int main(void)
{
    t_list  *lst;
    t_list  *node1;
    t_list  *node2;
    t_list  *node3;

    // إنشاء بعض العقد مع تخصيص ذاكرة للمحتوى
    node1 = ft_lstnew(strdup("Test 1"));
    node2 = ft_lstnew(strdup("Test 2"));
    node3 = ft_lstnew(strdup("Test 3"));

    // ربط العقد ببعضها لتكوين القائمة
    node1->next = node2;
    node2->next = node3;
    lst = node1;

    printf("Before clear - lst address: %p\n", (void *)lst);

    // استدعاء دالة ft_lstclear
    ft_lstclear(&lst, &del_content);

    printf("After clear - lst address: %p (should be 0/NULL)\n", (void *)lst);

    return (0);
}
