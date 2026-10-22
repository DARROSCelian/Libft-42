#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	i;
	size_t	len;
	char	*dest;

	i = 0;
	len = ft_strlen(src);
	dest = malloc(sizeof(char) * len + 1);
	if (!dest)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}