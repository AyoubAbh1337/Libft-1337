/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                   +:+ +:+         +:+      */
/*   By: ayblmouh <marvin@42.fr>                   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/16 11:38:22 by ayblmouh         #+#    #+#              */
/*   Updated: 2026/11/05 09:06:44 by ayblmouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
size_t	ft_strlen(const char *s);
char	*ft_strrchr(const char *s, int c);

void	*my_memcpy(void *dest, const void *str, size_t n);
char	*my_strchr(const char *s, int c);

void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);

t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **lst, t_list *new);
unsigned int	ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);

void	ft_lstadd_back(t_list **lst, t_list *new);

#endif
