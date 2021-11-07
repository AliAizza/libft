/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 09:32:42 by aaizza            #+#    #+#             */
/*   Updated: 2021/11/07 10:31:17 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
static char	*ft_convert(long int nb, int size, int sign)
{
	char	*a;

	a = malloc((size + 1) * sizeof(char));
	a[size + 1] = '\0';
	while (size >= 0)
	{
		a[size] = (nb % 10) + '0';
		nb /= 10;
		size--;
	}
	if (sign == 0)
		a[0] = '-';
	return (a);
}

char	*ft_itoa(int n)
{
	long int	nb;
	int			sign;
	int			size;
	long int	nbr;
	char		*str;

	sign = 1;
	size = 0;
	nb = n;
	nbr = n;
	if (nb == 0)
		return (ft_strdup("0"));
	if (nb < 0)
	{
		sign--;
		size++;
		nb *= -1;
		nbr *= -1;
	}
	while (nb > 0)
	{
		nb /= 10;
		size++;
	}
	str = ft_convert(nbr, size - 1, sign);
	return (str);
}

int main()
{
	printf("%s", ft_itoa(0));
}
