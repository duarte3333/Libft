#include "libft.h"
//Se fd for 0 -> standard input
//Se fd for 1 -> standard output
//Se fd for 2 -> standard error
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}