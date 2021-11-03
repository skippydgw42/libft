#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t n)
{
    // taille de sortie = 
    // si taille de ce qui doit sortir <= taille de src
    // => copy and out
    // si taille de ce qui doit sortir > taille de src
    // => alloue memoire de la bonne taille
    // => copy and out
    size_t          i;
    unsigned char   *dest;
    unsigned char   *str;

    i = 0;
    if (!dst && !src)
        return (NULL);
    dest = (unsigned char*)dst;
    str = (unsigned char*)src;
    while (n)
    {
        dest[i] = str[i];
        i++;
        n--;
    }
    return (dst);
}