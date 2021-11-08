/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:43:43 by aaizza            #+#    #+#             */
/*   Updated: 2021/11/07 21:43:52 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *new;
	size_t i;
	unsigned int i_start;

	i_start = start - 1;
	i = 0;
	new = malloc(sizeof(char) * len + 1);
	if (new == NULL)
		return (NULL);
	while (i < len)
	{
		new[i] = s[i_start + i];
		i++;
	}
	new[i] = '\0';
	return (new); 
}