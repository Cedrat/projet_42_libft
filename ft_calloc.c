/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoaille <lnoaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 15:42:15 by lnoaille          #+#    #+#             */
/*   Updated: 2020/05/10 02:43:03 by lnoaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*str;
	size_t	count;

	count = 0;
	if (size == 0 || nmemb == 0)
		return (0);
	if (!(str = malloc(size * nmemb)))
		return (0);
	while (count < nmemb)
	{
		str[count] = 0;
		count++;
	}
	return ((void *)&str[0]);
}
