/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoaille <lnoaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 17:45:01 by lnoaille          #+#    #+#             */
/*   Updated: 2020/05/05 17:42:45 by lnoaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int pos;

	pos = 0;
	while (s[pos])
	{
		if (s[pos] == c)
			return ((char *)&s[pos]);
		pos++;
	}
	if (s[pos] == c)
		return ((char *)&s[pos]);
	else
		return (NULL);
}
