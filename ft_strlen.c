#include "libft.h"

size_t  ft_strlen(char *dst)
{
    size_t i;

    i = 0;
    while (dst[i])
        i++;
    return (i);
}