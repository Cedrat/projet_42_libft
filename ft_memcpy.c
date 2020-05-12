/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoaille <lnoaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 14:52:34 by lnoaille          #+#    #+#             */
/*   Updated: 2020/05/11 16:04:26 by lnoaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t count;
	
	if (dest == NULL && src == NULL)
		return (NULL);
	count = 0;
	while (count < n)
	{
		*(unsigned char*)dest = *(unsigned char*)src;
		dest++;
		src++;
		count++;
	}
	return (dest - count);
}
