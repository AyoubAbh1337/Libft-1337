/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblmouh <ayblmouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 21:48:22 by ayblmouh          #+#    #+#             */
/*   Updated: 2026/11/03 22:27:55 by ayblmouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	j = ft_strlen(dst);
	if (size > 0)
	{
		while((i < size - 1) && src[i])
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

int	main()
{
	char	dest[42] = "Hello ";
	char	src[] = "world";

	printf("me: %zu\n", ft_strlcat(dest, src, 11));
	printf("no: %zu\n", strlcat(dest, src, 11));
	printf("%s\n", dest);	
}
