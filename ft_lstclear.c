/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoaille <lnoaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 18:38:39 by lnoaille          #+#    #+#             */
/*   Updated: 2020/05/10 14:26:15 by lnoaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *node;
	t_list *temp;

	node = *lst;
	while (node)
	{
		temp = node->next;
		(*del)(node->content);
		free(node);
		node = temp;
	}
	*lst = NULL;
}
