#include "libft.h"

size_t	wrd_count(char const *str, char c);
size_t	wrd_size (char const *s, char c, size_t *i);

char	**ft_split(char const *s, char c)
{
	char	**table;
	size_t	size;
	size_t	i;
	size_t	j;

	if (!s)
		return (0);
	table = (char **)malloc((wrd_count(s, c) + 1) * sizeof(char *));
	if (!table)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			size = wrd_size(s, c, &i);
			table[j] = ft_substr(s, (unsigned int)(i - size), size);
			j++;
		}
	}
	table[j] = 0;
	return (table);
}

size_t	wrd_count(char const *str, char c)
{
	size_t	i;

	i = 0;
	while (*str)
	{
		if (*str == c)
			str++;
		else
		{
			i++;
			while (*str != c && *str)
				str++;
		}
	}
	return (i);
}

size_t	wrd_size (char const *s, char c, size_t *i)
{
	size_t	size;

	size = 0;
	while (s[*i] != c && s[*i])
	{
		size++;
		*i += 1;
	}
	return (size);
}
