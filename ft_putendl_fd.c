#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	while (*s)
    {
        write(fd, &(*s), 1);
        s++;
    }
    write(fd, "\n", 1);
}

// int main()
// {
//     ft_putendl_fd("duarte", 1);
// }