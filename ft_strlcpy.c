/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoaille <lnoaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 17:45:03 by lnoaille          #+#    #+#             */
/*   Updated: 2020/05/09 17:20:42 by lnoaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t n;

	n = 0;
	while (src[n] && (n + 1) < (size))
	{
		dst[n] = src[n];
		n++;
	}
	if (size != 0)
		dst[n] = '\0';
	while (src[n])
		n++;
	return (n);
}
