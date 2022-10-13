#include "libft.h"

//Esta funcao percorre n bytes ate encontrar o elemento c
//caso encontre, retorna um ponteiro que aponta para
//esse elemento
//Ele faz o cast automaticamente de void

void *ft_memchr(const void *s, int c, size_t n)
{
    char *str;

    str = (char *)s;
    while (n)
    {
        if ((unsigned char)*str == (unsigned char)c)
            return (str);
        str++;
        n--;
    }
    return (0);
}

// int main()
// {
//     printf("mine %s\n", (char *)ft_memchr("bonana", 'a', 4));
//     printf("their %s\n", (char *)memchr("bonana", 'a', 4));
// }