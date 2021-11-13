/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:05:20 by aaizza            #+#    #+#             */
/*   Updated: 2021/11/12 01:33:59 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*a;
	char	*s1;
	int		i;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	a = malloc (i + 1);
	if (!a)
		return (0);
	s1 = (char *)s;
	i = 0;
	while (s1[i])
	{
		a[i] = f(i, s1[i]);
		i++;
	}
	a[i] = '\0';
	return (a);
}
