/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoaille <lnoaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 15:42:15 by lnoaille          #+#    #+#             */
/*   Updated: 2020/05/11 21:14:01 by lnoaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    void    *str;
    size_t  count;

	count = 0;
    if (!(str = malloc(size * nmemb)))
		return (0);
    ft_memset(str, 0, size * nmemb);
    	return (str);
}
