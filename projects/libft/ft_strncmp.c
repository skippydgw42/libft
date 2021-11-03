#include "libft.h"

int strncmp(char *s1, char *s2, size_t n)
{
    size_t  i;

    i = 0;
    while ((s1[i] || s2[i]) && i < n)
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (0);
}