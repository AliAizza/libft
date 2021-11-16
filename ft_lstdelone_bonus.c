/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:14:28 by aaizza            #+#    #+#             */
/*   Updated: 2021/11/16 17:14:30 by aaizza           ###   ########.fr       */
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
