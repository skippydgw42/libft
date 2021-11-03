#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    size_t  i;
    unsigned char   *mem;

    i = 0;
    mem = (unsigned char)malloc(size * count);
    if (!mem)
        return (NULL);
    while (i < count)
    {
        mem[i] = '\0';
        i++;
    }
    return (mem);
}