/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:23:43 by aaizza            #+#    #+#             */
/*   Updated: 2021/11/07 21:23:59 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*a;
	size_t	i;

	i = count * size;
	a = malloc(i);
	if (a == 0)
		return (NULL);
	ft_bzero(a, i);
	return (a);
}