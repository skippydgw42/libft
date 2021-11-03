#include "libft.h"

void    ft_memdel(void **ap)
{
    long    i;
    long    j;

    i = 0;
    j = 0;
    while (ap[i])
    {
        while (ap[j])
        {
            free (ap[j]);
            j++;
        }
        j = 0;
        i++;
    }
}