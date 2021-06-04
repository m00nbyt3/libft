#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	lend;

	len = ft_strlen((char *)src);
	lend = ft_strlen(dst);
	if (lend >= dstsize)
		return (len + dstsize);
	dst += lend;
	dstsize -= lend;
	while (--dstsize > 0 && *src)
		*dst++ = (char)*src++;
	*dst = '\0';
	return (len + lend);
}
