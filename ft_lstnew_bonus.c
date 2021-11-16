/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:14:59 by aaizza            #+#    #+#             */
/*   Updated: 2021/11/16 17:15:02 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc (sizeof(t_list));
	if (!new)
		return (0);
	new->content = content;
	new->next = 0;
	return (new);
}

/*int main()
{
	printf("%s", ft_lstnew("test")->content);
}*/