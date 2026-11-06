/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblmouh <ayblmouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 09:39:16 by ayblmouh          #+#    #+#             */
/*   Updated: 2026/10/24 11:30:20 by ayblmouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*ptr;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	start = 0;
	while (s1[start] && my_strchr(set, s1[start]))	//my_strchr
		start++;
	end = len;
	while (end > start  && my_strchr(set, s1[end - 1]))	//my_strchr
		end--;
	
	ptr = malloc(end - start + 1);
	if (ptr == NULL)
		return (NULL);
	my_memcpy(ptr, s1 + start, end - start);	//my_memcpy
	
	ptr[end - start] = '\0';
	return (ptr);
}

int	main()
{
	printf("%s", ft_strtrim("abcxHelloxxworldxabc", "axbc"));
}
