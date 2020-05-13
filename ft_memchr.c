/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoaille <lnoaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 17:14:41 by lnoaille          #+#    #+#             */
/*   Updated: 2020/05/13 18:21:15 by lnoaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			count;
	unsigned char	*copy;

	copy = (unsigned char*)s;
	count = 0;
	while (count < n)
	{
		if (copy[count] == (unsigned char)c)
			return (&copy[count]);
		count++;
	}
	return (NULL);
}
