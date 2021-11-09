#include<fcntl.h>
#include<stdio.h>
#include<unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*int main () {
	int fd = open("file.txt", 1);
	ft_putchar_fd('g', fd);
	printf("%d", fd);
}*/	
