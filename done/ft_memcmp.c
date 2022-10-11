#include <stdio.h>
#include <string.h>

//Ao contrario do strcmp, compara duas strings ate n bytes
//mas acaba por ser ate serem diferentes
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    char *str1;
    char *str2;

    str1 = (char *)s1;
    str2 = (char *)s2;
    while (n)
    {
        if (*str1 == *str2)
        {
            str1++;
            str2++;
            n--;
        }
        else
            return ((unsigned char)*str1 - (unsigned char)*str2);
    }
    return (0);
}

// int main()
// {
//     printf("mine %i\n", ft_memcmp("banana", "banako", 6));
//     printf("their %i\n", memcmp("banana", "banako", 6));
// }