#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    size_t  i;
    unsigned char   *ptr;

    i = 0;
    ptr = s;
    if (n == 0)
        return ;
    while (n)
    {
        ptr[i] = '\0';
        i++;
        n--;
    }
}