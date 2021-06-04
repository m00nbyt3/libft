#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	tam;
	void	*ptr;

	tam = count * size;
	ptr = malloc(tam);
	if (!ptr)
		return (0);
	ft_bzero(ptr, tam);
	return (ptr);
}
