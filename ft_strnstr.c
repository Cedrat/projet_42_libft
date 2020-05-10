/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoaille <lnoaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 13:52:42 by lnoaille          #+#    #+#             */
/*   Updated: 2020/05/06 18:27:31 by lnoaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t count;
	size_t count_l;

	count = 0;
	count_l = 0;
	if (!little[0])
		return ((char *)big);
	while (big[count] && count < len)
	{
		while (big[count + count_l] == little[count_l] && count + count_l < len)
			count_l++;
		if (!little[count_l])
			return ((char *)big + count);
		else
			count_l = 0;
		count++;
	}
	return (NULL);
}
