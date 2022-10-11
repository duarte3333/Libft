#include <stdio.h>
#include <string.h>

//Retorna a palavra a partir do primeiro elemento c que encontrar
char *ft_strchr(const char *s, int c)
{   
    while (*s)
    {
        if(*s == c)
            return ((char *)s);
        s++;
    }
    return (0);
}

// int main()
// {
//     printf("meu %s\n", ft_strchr("banana", 'a'));
//     printf("deles %s\n", strchr("banana", 'a'));
// }