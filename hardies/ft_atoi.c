#include <stdlib.h>
#include <stdio.h>

const char *ft_white_spaces(const char *nptr)
{
    while (*nptr <= 32)
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
    printf("aqui %s\n", nptr);
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
//     printf("mine: %i\n", ft_atoi("  -321a12"));
//     printf("their: %i\n", atoi("  -321a12"));
// }