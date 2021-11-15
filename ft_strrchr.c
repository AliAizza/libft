/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:39:14 by aaizza            #+#    #+#             */
/*   Updated: 2021/11/15 20:32:44 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*new;

	new = (char *)str;
	if (c == 0)
		return (new + ft_strlen(new));
	i = ft_strlen(new);
	while (i >= 0)
	{
		if (new[i] == (unsigned char)c)
			return (&new[i]);
		i--;
	}
	return (0);
}
