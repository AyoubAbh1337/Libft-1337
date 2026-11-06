/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_atoi.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ayblmouh <marvin@42.fr>                   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/22 19:09:43 by ayblmouh         #+#    #+#              */
/*   Updated: 2026/10/28 18:39:41 by ayblmouh        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int		i;
	int		sign;
	long	res;

	if (!nptr)
		return (0);
	i = 0;
	res = 0;
	sign = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || (nptr[i] == 32))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -sign;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = (res * 10) + (nptr[i] - 48);
		i++;
	}
	return ((int)(res * sign));
}

int	main(void)
{
	int	a;

	atoi(NULL);
	// printf("%d\n", ft_atoi(NULL));
	// printf("%d\n", a);
}

/*
printf("%d\n", ft_atoi("42"));
printf("%d\n", ft_atoi("-42"));
printf("%d\n", ft_atoi("+57"));
printf("%d\n", ft_atoi("   -123abc"));
printf("%d\n", ft_atoi("abc123"));
printf("%d\n", ft_atoi(""));
printf("%d\n", ft_atoi("+-42"));
printf("%d\n", ft_atoi("   +0042"));
printf("%d\n", ft_atoi("\t\n  25"));
return (0);
}*/
