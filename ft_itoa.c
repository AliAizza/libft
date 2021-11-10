/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 09:32:42 by aaizza            #+#    #+#             */
/*   Updated: 2021/11/11 00:30:30 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
static char	*ft_convert(long int nb, int size, int sign)
{
	char	*a;

	a = malloc((size + 1) * sizeof(char));
	if (!a)
		return (NULL);
	a[size] = '\0';
	size--;
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
		size++;
		nb /= 10;
	}
	str = ft_convert(nbr, size, sign);
	return (str);
}

/*int main()
{
	printf("%s", ft_itoa(-2147483648));
}*/