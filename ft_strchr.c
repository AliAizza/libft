/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:36:24 by aaizza            #+#    #+#             */
/*   Updated: 2021/11/07 21:36:34 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*new;

	new = (char *)str;
	if (c == 0)
		return (new + ft_strlen(new));
	i = 0;
	while (new[i])
	{
		if (new[i] == (unsigned char)c)
			return (&new[i]);
		i++;
	}
	return (0);
}