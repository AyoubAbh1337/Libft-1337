/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                   +:+ +:+         +:+      */
/*   By: ayblmouh <ayblmouh@student.1337.ma>       #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/24 13:28:13 by ayblmouh         #+#    #+#              */
/*   Updated: 2026/10/25 13:17:58 by ayblmouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	wordcount(const char *word, char sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (word[i] != '\0')
	{
		while (word[i] && word[i] == sep)
			i++;
		if (word[i] && word[i] != sep)
			count++;
		while (word[i] && word[i] != sep)
			i++;
	}
	return (count);
}

static int	countchar(const char *word, int i, char sep)
{
	int	counter;

	counter = 0;
	while (word[i] && word[i] != sep)
	{
		counter++;
		i++;
	}
	return (counter);
}

static void	free_tab(char **tab, int j)
{
	while (j > 0)
		free(tab[--j]);
	free(tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	tab = malloc((wordcount(s, c) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	while (s[i])
	{
		k = 0;
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			tab[j] = malloc((countchar(s, i, c) + 1) * sizeof(char)); //ex
			if (!tab[j])
			{
				free_tab(tab, j);
				return (NULL);
			}
			while (s[i] && s[i] != c)
			{
				tab[j][k] = s[i];
				i++;
				k++;
			}
			tab[j][k] = '\0';
			j++;
		}
	}
	tab[j] = NULL;
	return (tab);
}

int	main(void)
{
	int		i;
	char	**tab;

	tab = ft_split("hello", ' ');
	if (!tab)
		return (1);
	i = 0;
	while (tab[i])
	{
		printf("tab[%d] = %s\n", i, tab[i]);
		i++;
	}
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (0);
}
