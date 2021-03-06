/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoaille <lnoaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 17:45:05 by lnoaille          #+#    #+#             */
/*   Updated: 2020/11/04 18:15:32 by lnoaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../header/libft.h"

size_t	ft_strlen(const char *s)
{
	size_t pos;

	pos = 0;
	while (s[pos])
		pos++;
	return (pos);
}
