/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                   +:+ +:+         +:+      */
/*   By: ayblmouh <marvin@42.fr>                   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/06 11:51:14 by ayblmouh         #+#    #+#              */
/*   Updated: 2026/11/07 16:47:40 by ayblmouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_src;
	
	len_dst = 0;
	while (len_dst < size && dst[len_dst])
		len_dst++;
	len_src = ft_strlen(src);
	if (size <= len_dst)
		return (len_src + size);
	i = 0;
	while ((len_dst + i) < (size - 1) && src[i])
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_src + len_dst);
}
/*
int	main(void)
{
	size_t	q = 13;
	char	src[] = "world!";
	char	dst[42] = "Hello";

	printf("%zu\n", ft_strlcat(dst, src, q));
	printf("%s\n", dst);
	printf("%zu\n", strlcat(dst, src, q));
	printf("%s\n", dst);
	size_t	ft_strlcat(char *dst, const char *src, size_t size)
	{
		size_t	i;
		size_t	j;

		i = 0;
		j = 0;
		j = ft_strlen(dst);
		if (size > 0)
		{
			while ((i < size - 1) && src[i])
			{
				dst[j] = src[i];
				j++;
				i++;
			}
			dst[j] = '\0';
		}
		return (ft_strlen(src) + ft_strlen(dst));
	}
	//#include <stdio.h>
	//#include <bsd/string.h>
	int	main(void)
	{
		char	dest[42] = "Hello ";
		char	src[] = "world";

		printf("me: %zu\n", ft_strlcat(dest, src, 11));
		printf("no: %zu\n", strlcat(dest, src, 11));
		printf("%s\n", dest);
	}*/
