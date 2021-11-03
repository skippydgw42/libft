#include "libft.h"

static int ft_is_set(char c, char const set)
{
    unsigned int    i;

    i = 0;
    while (set[i])
    {
        if (c == set[i])
            return (1);
        i++;
    }
    return (0);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    unsigned int    i;
    unsigned int    j;
    unsigned int    x;
    char            *str;

    i = ft_strlen(s1);
    j = 0;
    while (ft_is_set(s1[i], set))
        i--;
    x = i;
    i = 0;
    while (ft_is_set(s1[i], set))
        i++;
    str = malloc(sizeof(char) * (x - i + 1));
    if (!str)
        return (NULL);
    while (i <= x)
    {
        str[j] = s1[i];
        j++;
        i++;
    }
    str[j] = '\0';
    return (str);
}