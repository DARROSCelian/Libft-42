#include "libft.h"

void	ft_bzero(void *ptr, size_t n)
{
	unsigned char	*bytes;
	size_t			i;

	bytes = ptr;
	i = 0;
	while (i < n)
	{
		bytes[i] = 0;
		i++;
	}
}