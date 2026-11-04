/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblmouh <ayblmouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 10:24:27 by ayblmouh          #+#    #+#             */
/*   Updated: 2026/11/03 10:51:04 by ayblmouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	upper(unsigned int index, char *c)
{
	(void)index;
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}

void    lower(unsigned int index, char *c)
{
        (void)index;
        if (*c >= 'A' && *c <= 'Z')
                *c += 32;
}

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while(s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

#include <stdio.h>

int	main()
{

	char str[] = "Hello world";

	ft_striteri(str, upper);
	printf("%s\n", str);
}
