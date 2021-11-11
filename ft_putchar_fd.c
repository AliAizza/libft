/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:50:16 by aaizza            #+#    #+#             */
/*   Updated: 2021/11/11 18:50:20 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<fcntl.h>

#include"libft.h"
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*int main () {
	int fd = open("file.txt", 1);
	ft_putchar_fd('g', fd);
	printf("%d", fd);
}*/	
