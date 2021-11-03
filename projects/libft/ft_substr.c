#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  i;
    char    *str;

    i = 0;
    str = malloc(sizeof(s) * (len + 1));
    if (!str)
        return (NULL);
    while (i < len && str[start])
    {
        str[i] = s[start];
        i++;
        start++;
    }
    str[i] = '\0';
    return (str);
}