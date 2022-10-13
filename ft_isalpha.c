#include "libft.h"

int ft_isalpha(int i)
{
    if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'))
        return (1);
    return (0);
}

// int main()
// {
//     printf("%i", ft_isalpha(10));
// }