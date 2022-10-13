#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
    {
        write(fd, &(*s), 1);
        s++;
    }
}

// int main()
// {
//     ft_putstr_fd("duarte", 1);
// }