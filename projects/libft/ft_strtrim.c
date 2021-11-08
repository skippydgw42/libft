/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:35:30 by mdegraeu          #+#    #+#             */
/*   Updated: 2021/11/04 15:55:26 by mdegraeu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_set(char c, char const *set)
{
	unsigned int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	ft_index(char const *s,char const *set, unsigned int i)
{
	if (i == 0)
		while (s[i] && ft_is_set(s[i], set))
			i++;
	else
	{
		i = ft_strlen(s) - 1;
		while (s[i] && ft_is_set(s[i], set))
		{
			if (i == 0)
				return (i);
			i--;
		}
	}
	return (i);
}

char	*ft_strtrim(char const *s, char const *set)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	x;
	char			*str;

	if (!s)
		return (NULL);
	x = 0;
	i = ft_index(s, set, x);
	x = ft_index(s, set, i);
	if (i == x)
	{
		str = ft_strdup(s);
		return (str);
	}
	str = malloc(sizeof(char) * (x - i + 2));
	if (!str)
		return (NULL);
	j = 0;
	while (i <= x)
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}
