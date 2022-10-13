#include "libft.h"

int ft_isprint(int i)
{
    if ((i > 31 && i < 127))
        return (1);
    return (0);
}

// int main(void)
// {
//     printf("%i", ft_isprint(65));
// } 