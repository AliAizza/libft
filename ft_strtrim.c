/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:19:45 by aaizza            #+#    #+#             */
/*   Updated: 2021/11/07 21:48:27 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_isset(char c, const char *str)
{
	int i;
	i = 0;
	while(str[i])
	{
		if(str[i] == c)
			return(1);
		i++;
	}
	return (0);
}
char *ft_strtrim(char const *s1, char const *set)
{
	int i;
	int j;
	char *a;
	
	i = 0;
	while (s1[i] && ft_isset(s1[i],set))
		i++;
	s1 += i;
	i = ft_strlen(s1) - 1;
	while (s1[i] && ft_isset(s1[i],set))
		i--;
	a = malloc(sizeof(char) * i + 1);
	j = 0;
	while (s1[j] && i >= 0)
	{
		a[j] = s1[j];
		j++;
		i--;		
	}
	a[j] = 0;
	return (a);
} 