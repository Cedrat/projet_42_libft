/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoaille <lnoaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 16:17:40 by lnoaille          #+#    #+#             */
/*   Updated: 2020/05/01 17:34:45 by lnoaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	count;
	size_t	t_count;
	size_t	len_s1;
	char	*trimmed;

	len_s1 = ft_strlen(s1);
	t_count = 0;
	count = 0;
	while (ft_memchr(set, s1[count], ft_strlen(set)))
		count++;
	while (ft_memchr(set, s1[len_s1 - 1], ft_strlen(set)))
		len_s1--;
	if (!(trimmed = malloc(sizeof(char) * (len_s1 + 1))))
		return (0);
	while (count < len_s1)
	{
		trimmed[t_count] = s1[count];
		count++;
		t_count++;
	}
	trimmed[t_count] = '\0';
	return (trimmed);
}
