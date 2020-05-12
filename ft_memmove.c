/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoaille <lnoaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 13:54:33 by lnoaille          #+#    #+#             */
/*   Updated: 2020/05/11 17:20:42 by lnoaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				count;
	unsigned char		*dest_u;
	const unsigned char *src_u;

	if (dest == NULL && src == NULL)
		return (NULL);
	dest_u = dest;
	src_u = src;
	count = 0;
	while (count < n)
	{
		if (dest < src)
			dest_u[count] = src_u[count];
		else
			dest_u[n - count - 1] = src_u[n - count - 1];
		count++;
	}
	return (dest);
}
