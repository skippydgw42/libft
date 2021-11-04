/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:24:03 by mdegraeu          #+#    #+#             */
/*   Updated: 2021/11/04 15:54:12 by mdegraeu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_split_count(char const *s, char c)
{
	unsigned int	i;
	unsigned int	ct;

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

int	ft_lit_str(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	char			**split;

	i = 0;
	k = 0;
	split = malloc(sizeof(*split) * (ft_split_count(s, c) + 1));
	if (!split)
		return (NULL);
	while (++k < ft_split_count(s, c))
	{
		while (s[i] == c)
			i++;
		split[k] = malloc(sizeof(**split) * (ft_lit_str(&s[i], c + 1)));
		if (!split[k])
			return (NULL);
		j = 0;
		while (j++, s[i] != c && s[i])
			split[k][j] = s[i++];
		split[k][j] = '\0';
	}
	split[k] = 0;
	return (split);
}
