/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:28:08 by aaizza            #+#    #+#             */
/*   Updated: 2021/11/14 17:03:53 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*a;
	char	*b;

	a = (char *)s1;
	b = (char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (a[i] == b[i] && i < n - 1)
		i++;
	return ((unsigned char) a[i] - (unsigned char) b[i]);
}
