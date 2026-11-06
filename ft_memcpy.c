/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblmouh <ayblmouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 09:00:19 by ayblmouh          #+#    #+#             */
/*   Updated: 2026/11/05 09:38:59 by ayblmouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	unsigned char	*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);

	i = 0;
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>

int	main()
{
	char src[] = "hi\0world";
	char dst[42];

	ft_memcpy(dst, src, 9);
	int i = 0;
	while (i < 9)
	{
		printf("%c", dst[i]);
		i++;
	}

//	memcpy(dst, src, 5);
//	printf("no: %s\n", dst);
}
