/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 23:37:04 by amonier           #+#    #+#             */
/*   Updated: 2022/11/23 17:46:30 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!del)
		return ;
	if (!lst || !*lst)
		return ;
	while (*lst)
	{
		(*del)((*lst)->content);
		temp = *lst;
		*lst = (*lst)->next;
		free(temp);
	}
}
