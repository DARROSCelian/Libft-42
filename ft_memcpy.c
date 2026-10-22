#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*src_bytes;
	unsigned char		*dest_bytes;
	size_t				i;

	src_bytes = src;
	dest_bytes = dest;
	i = 0;
	while (i < n)
	{
		dest_bytes[i] = src_bytes[i];
		i++;
	}
	return (dest);
}