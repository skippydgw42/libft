/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:08:07 by mdegraeu          #+#    #+#             */
/*   Updated: 2021/11/04 15:08:58 by mdegraeu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	unsigned char	*mem;

	i = 0;
	mem = malloc(sizeof(unsigned char) * (size * count));
	if (!mem)
		return (NULL);
	while (i < count)
	{
		mem[i] = '\0';
		i++;
	}
	return (mem);
}
