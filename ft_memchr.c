#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	srch;
	unsigned char	*str;

	srch = (unsigned char)c;
	str = (unsigned char *)s;
	while (n > 0)
	{
		if (*str == srch)
			return ((void *)str);
		str++;
		n--;
	}
	return (0);
}
