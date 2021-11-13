/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 03:24:34 by aaizza            #+#    #+#             */
/*   Updated: 2021/11/13 22:24:03 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}

/*void ft_del(void *a)
{
	int *i;
	i = (int *)a;
	*i = 0;
}

#include <stdio.h>
int main()
{
	int b = 99;
	t_list *a = ft_lstnew(&b);
	printf ("%d\n", *(int *)a->content);
	ft_lstdelone(a, ft_del);
	printf ("%d", *(int *)a->content);
}*/
