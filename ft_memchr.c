
#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    unsigned char *str;
    unsigned char uc;

    str = (unsigned char *)s;
    uc = (unsigned char)c;
    i = 0;
    while (i < n && str[i] != uc)
    {
        i++;
    }
    if (i == n)
        return (NULL);
    return (&str[i]);
}