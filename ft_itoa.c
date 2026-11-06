/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_itoa.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ayblmouh <ayblmouh@student.1337.ma>       #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/26 17:22:24 by ayblmouh         #+#    #+#              */
/*   Updated: 2026/10/27 17:27:08 by ayblmouh        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbr_len(long n)
{
	int	counter;

	counter = 0;
	if (n < 0)
	{
		counter++;
		n = -n;
	}
	while (n > 0)
	{
		counter++;
		n /= 10;
	}
	if (counter == 0)
		return (1);
	return (counter);
}

char	*ft_itoa(int nb)
{
	long	n;
	char	*ptr;
	int		len;
	int		p;
	int		i;

	n = nb;
	len = nbr_len(n);
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	p = 0;
	if (n < 0)
	{
		ptr[p] = '-';
		n = -n;
		p = 1;
	}
	i = len;
	while (i > p)
	{
		ptr[i - 1] = (n % 10) + 48;
		n = n / 10;
		i--;
	}
	ptr[len] = '\0';
	return (ptr);
}

#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_itoa(123));
	printf("%s\n", ft_itoa(-123));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-2147483648));
}
