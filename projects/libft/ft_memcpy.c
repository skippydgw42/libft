#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t          i;
    unsigned char   *dest;
    unsigned char   *str;

    i = 0;
    if (!dst && !src)
        return (NULL);
    dest = (unsigned char*)dst;
    str = (unsigned char*)src;
    while (i < n)
    {
        dest[i] = str[i];
        i++;
    }
    return (dst);
}