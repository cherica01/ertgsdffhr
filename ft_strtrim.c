#include "libft.h"

static int	is_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*str;
	size_t	i;

	if (!s1 || !set)
		return (NULL);

	start = 0;
	while (s1[start] && is_in_set(s1[start], set))
		start++;

	end = ft_strlen(s1);
	while (end > start && is_in_set(s1[end - 1], set))
		end--;

	len = end - start;

	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);

	i = 0;
	while (i < len)
	{
		str[i] = s1[start + i];
		i++;
	}
	str[i] = '\0';

	return (str);
}
