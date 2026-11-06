#include "libft.h"

void	*my_memcpy(void *dest, const void *str, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;

	i = 0;
	d = (char *)dest;
	s = (const char *)str;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
