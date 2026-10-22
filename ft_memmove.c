#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_bytes;
	const unsigned char	*src_bytes;
	size_t				i;

	dest_bytes = dest;
	src_bytes = src;
	if (n == 0 || dest == src)
		return (dest);
	i = 0;
	if (dest_bytes < src_bytes)
	{
		while (i < n)
		{
			dest_bytes[i] = src_bytes[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			dest_bytes[i - 1] = src_bytes[i - 1];
			i--;
		}
	}
	return (dest);
}
