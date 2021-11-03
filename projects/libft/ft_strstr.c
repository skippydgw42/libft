#include "libft.h"

char    *ft_strstr(char *str, char *to_find)
{
    unsigned int    i;
    unsigned int    j;
    unsigned int    x;

    i = 0;
    j = 0;
    if (ft_strlen(to_find) <= 0)
        return (str);
    while (str[i])
    {
        x = i;
        while (str[x] == to_find[j])
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