/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoaille <lnoaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 17:37:03 by lnoaille          #+#    #+#             */
/*   Updated: 2020/05/12 20:30:04 by lnoaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_strdup_custom(const char *s, int begin, int end)
{
	char *t;

	if (!(t = ft_strdup(&s[begin])))
		return (0);
	t[end] = '\0';
	return (ft_strdup(t));
}

char			**ft_split(char const *s, char c)
{
	char	**tab;
	int		count;
	int		i;
	int		begin;

	count = 0;
	i = 0;
	begin = 0;
	if (!(tab = malloc(sizeof(char*) * ft_strlen(s))))
		return (0);
	while (s[count])
	{
		while (s[count] == c && s[count])
			count++;
		begin = count;
		while (s[count] != c && s[count])
			count++;
		if (begin != count)
			if (!(tab[i++] = ft_strdup_custom(s, begin, count - begin)))
				return (0);
	}
	tab[i] = NULL;
	return (tab);
}
