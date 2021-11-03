#include "libft.h"

void    *ft_memalloc(size_t size)
{
    unsigned char   *mem;
    mem = (unsigned char*) malloc(sizeof(*mem) * size);
    if (!mem)
        return (NULL);

    while (size)
    {
        mem[size] = '\0';
        size--;
    }
    return (mem);
}