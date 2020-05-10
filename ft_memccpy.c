/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoaille <lnoaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 14:34:17 by lnoaille          #+#    #+#             */
/*   Updated: 2020/05/05 17:46:18 by lnoaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	count;
	char	*dest_temp;

	count = 0;
	dest_temp = dest;
	while (count < n)
	{
		dest_temp[count] = *(char*)src;
		if (dest_temp[count] == c)
			return (dest + count + 1);
		count++;
		src++;
	}
	return (NULL);
}
