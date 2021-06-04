#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;

	if (!src || !dst)
		return (0);
	len = ft_strlen(src);
	if (!dstsize)
		return (len);
	while (--dstsize > 0 && *src)
		*dst++ = (char)*src++;
	*dst = '\0';
	return (len);
}
