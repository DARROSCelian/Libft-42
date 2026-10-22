
#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;
    char *str;

    if (!s)
        return (NULL);
    str = (char*)s;
    i = 0;
    while (str[i] != c && str[i])
        i++;
    if (str[i] != c)
        return (NULL);
    return (&str[i]);
}