/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:51:46 by aaizza            #+#    #+#             */
/*   Updated: 2021/11/07 21:52:13 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_atoi(const char *str)
{
    char* strr;
    int sign;
    int res;
    int i;

    strr = (char*)str;
    sign = 1;
    res = 0;
    i = 0;
    while (strr[i] == 32 || (strr[i] >= 9 && strr[i] <= 13))
    {
        i++;
    }
    if (strr[i] == '-' || strr[i] == '+')
    {
        if (strr[i] == '-')
            sign *= -1;
        i++;
    }
    while (strr[i] && strr[i] >= '0' && strr[i] <= '9')
    {
        res = (res * 10) + (strr[i] - 48);
        i++;
    }
    return(res * sign);    
}