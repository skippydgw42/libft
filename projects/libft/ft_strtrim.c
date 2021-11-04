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

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	x;
	char			*str;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
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
		str[j++] = s1[i++];
	str[j] = '\0';
	return (str);
}
