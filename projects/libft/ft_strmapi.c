#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int    i;
    char            *str;

    i = 0;
    str = malloc(sizeof(*s) * (ft_strlen(s) + 1));
    if (!str)
        return (NULL);
    while (str[i])
    {
        str[i] = (*f)(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}