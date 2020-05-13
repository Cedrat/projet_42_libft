/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoaille <lnoaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 15:18:33 by lnoaille          #+#    #+#             */
/*   Updated: 2020/05/13 18:13:03 by lnoaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	size_t			count;
	unsigned char	*word;

	word = s;
	count = 0;
	while (count < len)
	{
		word[count] = c;
		count++;
	}
	return (s);
}
