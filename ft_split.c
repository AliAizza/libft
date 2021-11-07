/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 07:48:04 by aaizza            #+#    #+#             */
/*   Updated: 2021/11/07 09:32:34 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
static int    ft_issep(char    i, char    c)
{
    if (i == c)
        return (1);
    return (0);
}

static int    ft_count(char    *s, char    c)
{
    int    i;
    int    count;

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

static char    *ft_strdup1(char    *s, char    c)
{
    int        i;
    char    *str;

    i = 0;
    while (s[i] && !ft_issep(s[i], c))
        i++;
    str = malloc((i + 1) * sizeof(char));
    i = 0;
    while (!ft_issep(s[i], c))
    {
        str[i] = s[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}

char    **ft_split(char    const    *s, char    c)
{
    int        i;
    int        j;
    char    *g;
    char    **t;

    g = (char *)s;
    i = ft_count(g, c);
    t = malloc((i + 1) * sizeof(char *));
    i = 0;
    j = 0;
    while (g[i])
    {
        while (g[i] && ft_issep(g[i], c))
            i++;
        if (g[i] && !ft_issep(g[i], c))
        {
            t[j] = ft_strdup1(g + i, c);
            j++;
        }
        while (g[i] && !ft_issep(g[i], c))
            i++;
    }
    t[j] = 0;
    return (t);
}

int main()
{
    char *a = "sabcsdefsghis";
    char **b;
    int i;
    b = ft_split(a, 's');
    i = 0;
    while (b[i])
    {
        printf("%s", b[i]);
        i++;
    }
}
