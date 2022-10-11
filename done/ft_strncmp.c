#include <stdio.h>
#include <string.h>

//Esta funcao compara ate n elementos ou ate a str1 ou a str2 acabar

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    if (n == 0)
		return (0);
    while (*s1 && *s2 && n)
    {
        if (*s1 == *s2)
        {
            s1++;
            s2++;
            n--;
        }
        else
            return ((unsigned char)*s1 - (unsigned char)*s2);
    }
    return (0);
}

// int main ()
// {
//     char oi[10] = "bançaaa";
//     printf("mine %i\n", ft_strncmp(oi, "banako", 4));
//     printf("their %i\n", strncmp(oi, "banako", 4));
// }