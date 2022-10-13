#include "libft.h"

int     ft_size(int nb)
{
    int         i;
    long int    nbr;

    nbr = (long)nb;
    i = 0;
    if (nb == 0)
        return (1);
    if (nb < 0)
    {
        i++;
        nbr = -nbr;
    }
    while (nbr > 0)
    {
        nbr /= 10;
        i++;
    }
    return (i);
}
//Esta funcao transforma um int numa string
char	*ft_itoa(int nbr)
{
    char            *str_nbr;
    int             size_str;
    long  int       nb;

    nb = (long)nbr;
    size_str = ft_size(nb);
    str_nbr = (char *)malloc((size_str + 1) * sizeof(char));
    str_nbr[size_str] = 0;
    if (!str_nbr)
        return (NULL);
    if (nb == 0)
        *str_nbr = '0';
    if (nb < 0)
    {
        *str_nbr = ('-');
        nb = -nb;
    }
    while (nb > 0)
    {
        str_nbr[size_str - 1] = (nb % 10) + '0';
        nb /= 10;
        size_str--;
    }
    return (str_nbr);
}

// int main()
// {
//     printf("%s", ft_itoa(0));
// }