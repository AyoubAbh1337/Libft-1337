/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                   +:+ +:+         +:+      */
/*   By: ayblmouh <marvin@42.fr>                   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/22 17:27:19 by ayblmouh         #+#    #+#              */
/*   Updated: 2026/10/23 09:45:06 by ayblmouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	size_t	ls1;
	size_t	ls2;
	char	*ptr;

	if (!s1 || !s2)
		return (NULL);
	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	ptr = malloc(ls1 + ls2 + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (j < ls1)
		ptr[i++] = s1[j++];
	j = 0;
	while (j < ls2)
		ptr[i++] = s2[j++];
	ptr[i] = '\0';
	return (ptr);
}

#include <stdio.h>

int	main(void)
{
	char	*res;

	res = ft_strjoin("Hello ", "World");
	if (res == NULL)
		return (1);
	printf("%s", res);
	free(res);
}
