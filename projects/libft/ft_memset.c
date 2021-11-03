#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    size_t i;
    unsigned char    *ptr;

    i = 0;
    if (b == NULL)
        return (NULL);
    ptr = b;
    while (len)
    {
        ptr[i] = (unsigned char)c;
        i++;
        len--;
    }
    return (b);
}