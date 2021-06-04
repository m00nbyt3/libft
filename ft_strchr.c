#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char		srch;
	const unsigned char	*str;

	srch = (unsigned char)c;
	str = (const unsigned char *)s;
	while (*str)
	{
		if (*str == srch)
			return ((char *)str);
		str++;
	}
	if (*str == srch)
		return ((char *)str);
	return (0);
}
