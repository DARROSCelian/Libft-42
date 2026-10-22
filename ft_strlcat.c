#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t	src_len;
    size_t	dst_len;
    size_t	tlen;

    src_len = 0;
    while (src[src_len])
        src_len++;
    if (size == 0)
        return (src_len);
    dst_len = 0;
    while (dst_len < size && dst[dst_len])
        dst_len++;
    if (dst_len == size)
        return (size + src_len);
    tlen = 0;
    while (src[tlen] && tlen < size - dst_len - 1)
    {
        dst[dst_len + tlen] = src[tlen];
        tlen++;
    }
    dst[dst_len + tlen] = '\0';
    return (dst_len + src_len);
}