/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 03:20:53 by aaizza            #+#    #+#             */
/*   Updated: 2021/11/13 22:28:47 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

/*int main()
{
	t_list *a = ft_lstnew("1");
	a->next = ft_lstnew("2");
	ft_lstadd_front(&a, ft_lstnew("0"));
	ft_lstadd_front(&a, ft_lstnew("-1"));
	printf("%d", ft_lstsize(a));
}*/