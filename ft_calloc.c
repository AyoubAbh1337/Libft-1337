/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_calloc.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ayblmouh <marvin@42.fr>                   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/20 21:31:27 by ayblmouh         #+#    #+#              */
/*   Updated: 2026/10/22 17:36:01 by ayblmouh        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	size_t	*ptr;

	i = 0;
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	while (i < size)
	{
		(size_t *) ft_bzero((size_t) ptr, size);
		i++;
	}
	free(ptr);
	ptr = NULL;
}

int	main(void)
{
}
