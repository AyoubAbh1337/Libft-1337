/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                   +:+ +:+         +:+      */
/*   By: ayblmouh <marvin@42.fr>                   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/22 17:48:37 by ayblmouh         #+#    #+#              */
/*   Updated: 2026/10/23 09:48:19 by ayblmouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	l;
	char	*ptr;

	if (!s)
		return (NULL);
	l = ft_strlen(s);
	if (start >= l)
		len = 0;
	else if (len > l - start)
		len = l - start;
	ptr = malloc(len + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

#include <stdio.h>

int	main(void)
{
	char	*res;

	res = ft_substr("hello world", 6, 5);
	if (res == NULL)
		return (1);
	printf("%s", res);
	free(res);
}
