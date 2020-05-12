/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoaille <lnoaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 11:05:10 by lnoaille          #+#    #+#             */
/*   Updated: 2020/05/13 01:25:05 by lnoaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t len_src;
	size_t count;
	size_t start_c;

	start_c = 0;
	len_src = ft_strlen(src);
	count = ft_strlen(dst);
	while (size > (count + 1 + start_c) && src[start_c])
	{
		dst[count + start_c] = src[start_c];
		start_c++;
	}
	if (size > count)
		dst[count + start_c] = '\0';
	if (size > count)
		size = count;
	return (size + len_src);
}
