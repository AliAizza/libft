/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:42:58 by aaizza            #+#    #+#             */
/*   Updated: 2021/11/15 20:36:43 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*s1;
	char	*s2;

	s1 = (char *)haystack;
	s2 = (char *)needle;
	i = 0;
	if (s2[0] == '\0')
		return (s1);
	while (s1[i] != '\0' && i < len)
	{
		j = 0;
		while (s1[i + j] != '\0' && s1 [i + j] == s2[j] && i + j < len)
		{
			if (s2[j + 1] == '\0')
				return (&s1[i]);
			j++;
		}
		i++;
	}
	return (0);
}
