/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                   +:+ +:+         +:+      */
/*   By: ayblmouh <marvin@42.fr>                   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/16 11:38:22 by ayblmouh         #+#    #+#              */
/*   Updated: 2026/10/24 10:42:52 by ayblmouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>
# include <stdlib.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
size_t	ft_strlen(const char *s);
char	*ft_strrchr(const char *s, int c);

void    *my_memcpy(void *dest, const void *str, size_t n);
char    *my_strchr(const char *s, int c);

#endif
