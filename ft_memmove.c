#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char	*str1;
	unsigned char		*str2;

	str1 = (const unsigned char *)src;
	str2 = (unsigned char *)dst;
	if (!dst && !src)
		return (0);
	if (dst > src)
		while (len-- > 0)
			*(str2 + len) = *(str1 + len);
	else
		while (len-- > 0)
			*(str2++) = *(str1++);
	return (dst);
}
