#include "libft.h"

//Esta funcao compara ate n elementos ou ate a str1 ou a str2 acabar

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    if (n == 0)
		return (0);
    while (*s1 && *s2 && (n - 1) && (*s1 == *s2))
    {
        s1++;
        s2++;
        n--;          
    }   
    return ((unsigned char)*s1 - (unsigned char)*s2);
}

// int main ()
// {
//     printf("mine %i\n", ft_strncmp("abcdefgh", "abcdwxyz", 4));
//     printf("their %i\n", strncmp("abcdefgh", "abcdwxyz", 4));
// }