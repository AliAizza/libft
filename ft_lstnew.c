/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 21:13:18 by aaizza            #+#    #+#             */
/*   Updated: 2021/11/13 22:28:28 by aaizza           ###   ########.fr       */
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