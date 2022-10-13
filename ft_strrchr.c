#include "libft.h"

int ft_checkfront(const char *s, int c)
{
    s++;
    while (*s)
    {
        if (*s == c)
            return (0);
        s++;
    }
    return (1);
}

//Retorna a palavra a partir do ultimo elemento c que encontrar
char *ft_strrchr(const char *s, int c)
{   
    while (*s)
    {
        if(*s == c && ft_checkfront(s, c))
            return ((char *)s);
        s++;
    }
    if (c == '\0')
		return ((char *)s);
    return (0);
}

// int main()
// {
//     printf("meu %s\n", ft_strrchr("banana", 'a'));
//     printf("deles %s\n", strrchr("banana", 'a'));
// }