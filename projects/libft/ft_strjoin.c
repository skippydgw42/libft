#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    unsigned int    i;
    char            *str;

    i = 0;
    str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1);
    if (!str)
        return (NULL);
    while (s1[i])
    {
        str[i] = s1[i];
        i++;
    }
    while (s2[i])
    {
        str[i] = s2[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}