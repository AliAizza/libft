/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:42:58 by aaizza            #+#    #+#             */
/*   Updated: 2021/11/11 18:57:18 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	size_t	i;
	size_t	j;
	char	*s1;
	char	*s2;

	s1 = (char *) str1;
	s2 = (char *) str2;
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

/*int main()
{
	char a[] = "123456testldsknvl";
	char b[] = "test";
	printf("%s", ft_strnstr(a, b, 10));
}*/