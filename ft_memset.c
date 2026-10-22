#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t n)
{
	unsigned char	*bytes;
	size_t			i;

	bytes = ptr;
	i = 0;
	while (i < n)
	{
		bytes[i] = (unsigned char)value;
		i++;
	}
	return (ptr);
}