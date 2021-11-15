/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:36:24 by aaizza            #+#    #+#             */
/*   Updated: 2021/11/15 20:32:25 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*new;

	new = (char *)str;
	i = 0;
	while (new[i])
	{
		if (new[i] == ((unsigned char)c))
			return (&new[i]);
		i++;
	}
	if (new[i] == (unsigned char)c)
		return (&new[i]);
	return (0);
}
