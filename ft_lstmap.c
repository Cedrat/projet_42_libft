/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoaille <lnoaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 15:56:31 by lnoaille          #+#    #+#             */
/*   Updated: 2020/05/12 19:02:26 by lnoaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *temp;
	t_list *new;
	t_list *debut;

	if (!lst)
		return (NULL);
	if (!(new = malloc(sizeof(t_list))))
		return (0);
	temp = lst;
	debut = new;
	while (temp->next)
	{
		if (!(debut->content = (*f)(temp->content)))
			(*del)(temp->content);
		debut->next = malloc(sizeof(t_list));
		debut = debut->next;
		temp = temp->next;
	}
	if (!(debut->content = (*f)(temp->content)))
		(*del)(temp->content);
	return (new);
}
