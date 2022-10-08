#include <unistd.h>
#include <stdio.h>

int ft_isascii(int i)
{
    if ((i >= 0 && i <= 127))
        return (1);
    return (0);
}

// int main(void)
// {
//     printf("%i", ft_isascii(65));
// } 