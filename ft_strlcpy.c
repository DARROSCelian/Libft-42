
#include "libft.h"

size_t    ft_strlcpy(char *src, char *dest, size_t size)
{
    int i;

    i = 0;
    if (size == 0)
        return (size);
    while (src[i] && i < size)
    {
        dest[i] = src[i];
        i++;
    }
    while (i < size)
    {
        dest[i] = '\0';
        i++;
    }
    return (size);
}