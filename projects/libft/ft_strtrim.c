/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:35:30 by mdegraeu          #+#    #+#             */
/*   Updated: 2021/11/09 18:19:25 by mdegraeu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_str_size(char const *s, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s) - 1;
	while (ft_strchr(set, s[i]) && s[i])
		i++;
	if (i == ft_strlen(s))
		return (i);
	while (ft_strchr(set, s[j]) && i < j)
		j--;
	return (j - i + 1);
}

char	*ft_str_init(char const *s, char const *set)
{
	char	*str;

	if (ft_str_size(s, set) == ft_strlen(s))
		str = ft_calloc(1, sizeof(char));
	else if (ft_str_size(s, set) == 0)
		str = ft_calloc(ft_strlen(s), sizeof(char));
	else
		str = ft_calloc(ft_str_size(s, set) + 1, sizeof(char));
	return (str);
}

char	*ft_strtrim(char const *s, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	str = ft_str_init(s, set);
	if (ft_str_size(s, set) > 0 && ft_str_size(s, set) != ft_strlen(s))
	{
		while (ft_strchr(set, s[i]))
			i++;
		while (j < ft_str_size(s, set))
		{
			str[j] = s[i];
			i++;
			j++;
		}
	}
	str[j] = '\0';
	return (str);
}
/*
int	main()
{
	char * s = ft_strtrim("123", "");
	char * s2 = ft_strtrim("123", "123");
	int	ct = ft_str_size("123", "");

	printf("1 : %s\n", s);
	printf("2 : %s\n", s2);
	//printf("strlen : %zu\n", ft_strlen("123"));
	//printf("strlen s : %zu\n", ft_strlen(s));
	
}
*/
