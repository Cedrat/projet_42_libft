/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoaille <lnoaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 14:34:17 by lnoaille          #+#    #+#             */
/*   Updated: 2020/05/11 16:43:56 by lnoaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    size_t						count;
    unsigned    char			*dest_temp;
    const   unsigned    char    *src_temp;

	count = 0;
    dest_temp = dest;
    src_temp = src;
    while (count < n)
    {
		dest_temp[count] = src_temp[count];
		if (dest_temp[count] == (unsigned char)c)
			return (dest + count + 1);
		count++;
		src++;
    }
    return (NULL);
}
