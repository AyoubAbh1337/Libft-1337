/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblmouh <ayblmouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 21:48:22 by ayblmouh          #+#    #+#             */
/*   Updated: 2026/11/05 12:15:53 by ayblmouh         ###   ########.fr       */
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

	len_src = ft_strlen(src);
	while (len_dst < size && dest[len_src])
		len_src++;
	len_dst = ft_strlen(dst);
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

int	main()
{
	size_t q = 13;
	char src[] = "world!";
	char dst[42] = "Hello";
	printf("%zu\n", ft_strlcat(dst, src, q));
	printf("%s\n", dst);
	printf("%zu\n", strlcat(dst, src, q));
        printf("%s\n", dst);
}
