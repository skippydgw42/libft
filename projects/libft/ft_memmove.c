/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <mdegraeu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:59:50 by mdegraeu          #+#    #+#             */
/*   Updated: 2021/11/03 12:03:29 by mdegraeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t n)
{
    size_t          i;
    unsigned char   *dest;
    unsigned char   *str;
    unsigned char   *temp;

    i = 0;
    temp = ft_strdup(src);
    if (!dst && !src)
        return (NULL);
    dest = (unsigned char*)dst;
    str = (unsigned char*)src;
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