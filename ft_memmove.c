/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:18:47 by aaizza            #+#    #+#             */
/*   Updated: 2021/11/11 18:49:36 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t	j;
	char	*dst;
	char	*src;

	dst = (char *)s1;
	src = (char *)s2;
	j = n - 1;
	if (dst > src)
	{
		while (j + 1 > 0)
		{
			dst[j] = src[j];
			j--;
		}
	}
	else
		ft_memcpy(dst, src, n);
	return (s1);
}