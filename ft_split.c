/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 07:48:04 by aaizza            #+#    #+#             */
/*   Updated: 2021/11/11 04:29:30 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_issep(char i, char c)
{
	if (i == c)
		return (1);
	return (0);
}

int	ft_count(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (!ft_issep(s[i], c) && (ft_issep(s[i - 1], c) || !s[i - 1]))
			count++;
		i++;
	}
	return (count);
}

char	*ft_strdup1(char *s, char c)
{
	int		i;
	char	*str;

	i = 0;
	while (s[i] && !ft_issep(s[i], c))
		i++;
	str = malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] && !ft_issep(s[i], c))
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_norminette25(char **t, char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && ft_issep(s[i], c))
			i++;
		if (s[i] && !ft_issep(s[i], c))
		{
			t[j] = ft_strdup1(s + i, c);
			j++;
		}
		while (s[i] && !ft_issep(s[i], c))
			i++;
	}
	t[j] = 0;
	return (t);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	*g;
	char	**t;

	if (!s)
		return (NULL);
	g = (char *)s;
	i = ft_count(g, c);
	t = malloc((i + 1) * sizeof(char *));
	if (!t)
		return (NULL);
	return (ft_norminette25(t, g, c));
}
/*int main()
{
    char **b = ft_split("split  ||this|for|me|||||!|", '|');
    int i;
    i = 0;
    while (b[i])
    {
        printf("%s\n", b[i]);
        i++;
	}
}*/
