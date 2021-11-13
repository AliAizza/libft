/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 03:25:10 by aaizza            #+#    #+#             */
/*   Updated: 2021/11/12 19:16:48 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (*lst && del)
	{
		temp = *lst;
		while (temp->next)
		{
			temp = *lst;
			ft_lstdelone(temp, del);
			*lst = (*lst)->next;
		}
	}
	*lst = 0;
}
