/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:20:28 by mdegraeu          #+#    #+#             */
/*   Updated: 2021/11/04 15:44:41 by mdegraeu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	if (b == NULL)
		return (NULL);
	ptr = (unsigned char *)b;
	while (len)
	{
		ptr[i] = (unsigned char)c;
		i++;
		len--;
	}
	return (b);
}
