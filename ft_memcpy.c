/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoaille <lnoaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 14:52:34 by lnoaille          #+#    #+#             */
/*   Updated: 2020/05/13 18:12:28 by lnoaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t count;

	if (dst == NULL && src == NULL)
		return (NULL);
	count = 0;
	while (count < n)
	{
		*(unsigned char*)dst = *(unsigned char*)src;
		dst++;
		src++;
		count++;
	}
	return (dst - count);
}
