/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strncmp.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ayblmouh <marvin@42.fr>                   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/22 17:27:53 by ayblmouh         #+#    #+#              */
/*   Updated: 2026/10/22 17:27:57 by ayblmouh        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

int	main(void)
{
	printf("Test 1: %d\n", ft_strncmp("abc", "abc", 3));
	printf("Test 2: %d\n", ft_strncmp("abc", "abd", 3));
	printf("Test 3: %d\n", ft_strncmp("abd", "abc", 3));
	printf("Test 4: %d\n", ft_strncmp("abc", "abd", 2));
	printf("Test 5: %d\n", ft_strncmp("", "abc", 3));
	printf("Test 6: %d\n", ft_strncmp("abc", "xyz", 0));
	return (0);
}

/*
#include <stdio.h>

int	main()
{
char word1[] = "abz";
char word2[] = "aba";
printf("%d", ft_strncmp(word1, word2, sizeof(word1)));
}*/
