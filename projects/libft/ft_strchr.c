#include "libft.h"

char    *ft_strchr(char *str, int c)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == (char)c)
            return (&str[i]);
        i++;
    }
    if ((char)c == '\0')
        return (&str[i]);
    return (NULL);
}

