/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:19:45 by aaizza            #+#    #+#             */
/*   Updated: 2021/11/11 18:58:16 by aaizza           ###   ########.fr       */
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
	int		i;
	int		j;

	if (!s1)
		return (NULL);
	a = (char *)s1;
	i = 0;
	if (!set)
		return (a);
	while (a[i] && ft_isset(a[i], set))
		i++;
	j = ft_strlen(a) - 1;
	while (j > 0 && ft_isset(a[j], set))
		j--;
	return (ft_substr(a, i, j - i + 1));
}