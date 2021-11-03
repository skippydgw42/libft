#include "libft.h"

int ft_split_count(char const *s, char c)
{
    unsigned int    i;
    unsigned int    ct;

    i = 0;
    ct = 0;
    while (s[i])
    {
        while (s[i] == c && s[i])
            i++;
        if (s[i])
            ct++;
        while (s[i] != c && s[i])
            i++;
    }
    return (ct);
}

int ft_lit_str(char const *s, char c)
{
    int i;

    i = 0;
    while (s[i] != c)
        i++;
    return (i);
}

char    **ft_split(char const *s, char c)
{
    unsigned int    i;
    unsigned int    j;
    unsigned int    k;
    char            **split;

    i = 0;
    k = 0;
    split = malloc(sizeof(*split) * (ft_split_count(s, c) + 1));
    if (!split)
        return (NULL);
    while (k < ft_split_count(s, c))
    {
        while (s[i] == c)
            i++;
        split[k] = malloc(sizeof(**split) * (ft_lit_str(&s1[i], c + 1));
        if (!split[k])
            return (NULL);
        j = 0;
        while (s[i] != c && s[i])
        {
            split[k][j] = s[i];
            j++;
            i++;
        }
        split[k][j] = '\0'
        k++;
    }
    split[k] = 0;
    return (split);
}