/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoaille <lnoaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 17:37:03 by lnoaille          #+#    #+#             */
/*   Updated: 2020/05/13 15:10:37 by lnoaille         ###   ########.fr       */
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

static	size_t	ft_nbr_of_split(char const *s, char c)
{
	size_t	begin;
	size_t	count;
	size_t	nbr;

	begin = 0;
	count = 0;
	nbr = 0;
	while (s[count])
	{
		while (s[count] == c && s[count])
			count++;
		begin = count;
		while (s[count] != c && s[count])
			count++;
		if (begin != count)
			nbr++;
	}
	return (nbr);
}

char			**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	count;
	size_t	i;
	size_t	begin;

	count = 0;
	i = 0;
	begin = 0;
	if (!(tab = malloc(sizeof(char*) * ft_nbr_of_split(s, c))))
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
