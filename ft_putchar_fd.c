/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:50:16 by aaizza            #+#    #+#             */
/*   Updated: 2021/11/16 15:05:30 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<fcntl.h>

#include"libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*int main () {
	int fd = open("libft.txt", 1);
	ft_putchar_fd('5', fd);
	printf("%d", fd);
}*/
