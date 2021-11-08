/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:40:01 by aaizza            #+#    #+#             */
/*   Updated: 2021/11/07 21:40:14 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
char	*ft_strjoin(const char *s1, const char *s2)
{
	int		i;
	int	 j;
	int		s1len;
	int		s2len;
	int	 len;
	char	*str;
	
	s1len = ft_strlen((char*) s1);
	s2len = ft_strlen((char*) s2);
	len = s1len + s2len;
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < s1len)
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < len)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}