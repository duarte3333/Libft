#include "libft.h"

const char *ft_white_spaces(const char *nptr)
{
    while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13))
        nptr++;
    return (nptr);
}

int ft_atoi(const char *nptr)
{
    int signal;
    int nb;
    
    signal = 1;
    nb = 0;
    nptr = ft_white_spaces(nptr);
    if (*nptr == '-')
    {
        signal *= -1;
        nptr++;
    }
    else if (*nptr == '+')
        nptr++;
    while (*nptr >= '0' && *nptr <= '9')
    {
        nb = nb * 10 + *nptr - '0';
        nptr++;
    }
    return (nb * signal);
}

// int main()
// {
//     printf("mine: %i\n", ft_atoi("\e475"));
//     printf("their: %i\n", atoi("\e475"));
// }