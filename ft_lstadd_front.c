/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 21:31:15 by aaizza            #+#    #+#             */
/*   Updated: 2021/11/13 22:27:43 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
	else
		*lst = new;
}

/*int main()
{
	t_list *a = ft_lstnew("1");
	a->next = ft_lstnew("2");
	ft_lstadd_front(&a, ft_lstnew("0"));
	ft_lstadd_front(&a, ft_lstnew("-1"));
	while(a)
	{
		printf("%s", a->content);
		a = a->next;
	}
}*/