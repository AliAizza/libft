/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:41:09 by aaizza            #+#    #+#             */
/*   Updated: 2021/11/12 01:15:15 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	l;
	char	*src;

	src = (char *)s2;
	i = 0;
	l = ft_strlen(src);
	if (n == 0)
		return (l);
	while (src[i] && i < n - 1)
	{
		s1[i] = src[i];
		i++;
	}
	s1[i] = '\0';
	return (l);
}
