/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 03:23:23 by aaizza            #+#    #+#             */
/*   Updated: 2021/11/14 16:57:24 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

/*int main()
{
	t_list *a = ft_lstnew("1");
	a->next = ft_lstnew("2");
	ft_lstadd_front(&a, ft_lstnew("0"));
	ft_lstadd_front(&a, ft_lstnew("-1"));
	printf("%s", ft_lstlast(a)->content);
}*/