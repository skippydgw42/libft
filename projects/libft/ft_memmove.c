/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <mdegraeu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:59:50 by mdegraeu          #+#    #+#             */
/*   Updated: 2021/11/05 11:10:55 by mdegraeu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dest;
	char	*temp;

	i = 0;
	if (!dst && !src)
		return (NULL);
	temp = ft_strdup((char *)src);
	dest = (char *)dst;
	if (src < dst)
	{
		while (i < n)
		{
			dest[i] = temp[i];
			i++;
		}
	}
	else
		ft_memcpy(dst, src, n);
	free (temp);
	return (dst);
}
