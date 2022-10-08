#include <unistd.h>
#include <stdio.h>

int ft_isdigit(int i)
{
    if ((i >= '0' && i <= '9'))
        return (1);
    return (0);
}

// int main()
// {
//     printf("%i", ft_isdigit(40));
//     return(0);
// }