/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoaille <lnoaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 17:59:27 by lnoaille          #+#    #+#             */
/*   Updated: 2020/05/10 02:41:31 by lnoaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			pos;
	unsigned char	*word1;
	unsigned char	*word2;

	word1 = (unsigned char*)s1;
	word2 = (unsigned char*)s2;
	pos = 0;
	if (n == 0)
		return (0);
	while (word1[pos] && word2[pos] && pos < (n - 1)
			&& word1[pos] == word2[pos])
		pos++;
	if ((word1[pos] - word2[pos]) > 0)
		return (1);
	else if ((word1[pos] - word2[pos]) < 0)
		return (-1);
	else
		return (0);
}
