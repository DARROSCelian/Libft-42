
#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
    char *str;
    unsigned char uc;

    i = 0;
    if (!s)
        return (NULL);
    str = (char*)s;
    uc = (unsigned char)c;
    while (str[i])
        i++;
    while (i > 0 && (unsigned char)str[i] != uc)
        i--;
    if (str[i] != uc)
        return (NULL);
    return (unsigned char*)&str[i];
}