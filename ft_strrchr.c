#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char		srch;
	const unsigned char	*str;
	int					size;

	srch = (unsigned char)c;
	str = (const unsigned char *)s;
	size = ft_strlen((char *)str);
	if (str[size] == srch)
		return ((char *)str + size);
	while (size >= 0)
	{
		if (str[size] == srch)
			return ((char *)str + size);
		size--;
	}
	return (0);
}
