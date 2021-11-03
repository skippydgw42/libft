#include "libft.h"

char    *ft_strnstr(char *str, char *to_find, size_t len)
{
    size_t  i;
    size_t  j;
    size_t  x;

    i = 0;
    j = 0;
    while (str[i] && i < len)
    {
        x = i;
        while (str[x] == to_find[j] && x < len)
        {
            if (to_find[j + 1] == '\0')
                return (&str[i]);
            x++;
            j++;
        }
        j = 0;
        i++;
    }
    return (NULL);
}