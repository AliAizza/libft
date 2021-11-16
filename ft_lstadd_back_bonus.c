/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:14:05 by aaizza            #+#    #+#             */
/*   Updated: 2021/11/16 17:14:09 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (*lst && new)
	{
		temp = ft_lstlast(*lst);
		temp->next = new;
		new->next = 0;
	}
	else
		*lst = new;
}

/*int main()
{
	t_list *a = ft_lstnew("1");
	a->next = ft_lstnew("2");
	ft_lstadd_back(&a, ft_lstnew("3"));
	ft_lstadd_back(&a, ft_lstnew("4"));
	while(a)
	{
		printf("%s", a->content);
		a = a->next;
	}
}*/