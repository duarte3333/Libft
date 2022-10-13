#include "libft.h"

//Retorna a palavra a partir do primeiro elemento c que encontrar
char *ft_strchr(const char *s, int c)
{   
    while (*s != '\0')
    {
        if(*s == c)
            return ((char *)s);
        s++;
    }
    if (c == '\0')
		return ((char *)s);
    return (0);
}

// int main()
// {
//     printf("meu %s\n", ft_strchr("banana", '\0'));
//     printf("deles %s\n", strchr("banana", '\0'));
// }