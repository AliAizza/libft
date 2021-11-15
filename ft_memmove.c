/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:18:47 by aaizza            #+#    #+#             */
/*   Updated: 2021/11/14 17:07:21 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	j;
	char	*s1;
	char	*s2;

	s1 = (char *)dst;
	s2 = (char *)src;
	j = len - 1;
	if (s1 > s2)
	{
		while (j + 1 > 0)
		{
			s1[j] = s2[j];
			j--;
		}
	}
	else
		ft_memcpy(s1, s2, len);
	return (s1);
}
