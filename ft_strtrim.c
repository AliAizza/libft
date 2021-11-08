/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:19:45 by aaizza            #+#    #+#             */
/*   Updated: 2021/11/08 12:51:03 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int	ft_isset(char c, const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*a;
	char	*s;
	int		i;
	int		j;

	a = (char *)s1;
	i = 0;
	while (a[i] && ft_isset(a[i], set))
		i++;
	a += i;
	j = ft_strlen(a) - 1;
	while (a[j] && ft_isset(a[j], set))
		j--;
	s = malloc((j + 1) * sizeof(char));
	i = 0;
	while (a[i] && j > 0)
	{
		s[j] = a[j];
		j--;
	}
	s[i] = '\0';
	return (s);
}