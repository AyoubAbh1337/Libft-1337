/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                   +:+ +:+         +:+      */
/*   By: ayblmouh <marvin@42.fr>                   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/20 14:10:45 by ayblmouh         #+#    #+#              */
/*   Updated: 2026/11/07 16:48:10 by ayblmouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!big || !little)
		return (NULL);
	if (little[0] == '\0')
		return ((char *) big);
	i = 0;
	while (i < len && big[i])
	{
		j = 0;
		while ((i + j) < len && big[i + j] && little[j]
			&& big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return ((char *) & big[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	const char	*largestring = "Foo Bar Baz";
	const char	*smallstring = NULL;
	char		*ptr;

//	printf("%s\n", ft_strnstr(largestring, smallstring, sizeof(largestring)));
	printf("%s\n", strnstr(largestring, smallstring, sizeof(largestring)));
}*/
