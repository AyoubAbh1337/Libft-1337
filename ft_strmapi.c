/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblmouh <ayblmouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 09:23:36 by ayblmouh          #+#    #+#             */
/*   Updated: 2026/11/03 10:11:21 by ayblmouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	upper(unsigned int index, char c)
{
	(void)index;
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

char    lower(unsigned int index, char c)
{
        (void)index;
        if (c >= 'A' && c <= 'Z')
                c += 32;
        return (c);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char	*res;	
	
	if (!s || !f)
		return (NULL);
	res = malloc(ft_strlen(s) * sizeof(char) + 1);
	if (!res)
		return (NULL);


	i = 0;
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

#include <stdio.h>

int	main()
{
	printf("%s\n", ft_strmapi("Hello world", upper));
	printf("%s\n", ft_strmapi("Hello world", lower));
}
