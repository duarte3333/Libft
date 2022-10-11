#include <string.h>
#include <stdio.h>

//Copia n bytes da src para o dest
void *ft_memcpy(void *dest, const void *src, size_t n)
{
    char    *dest1;
    char    *src1;

    dest1 = (char *)dest;
    src1 = (char *)src;
    while (n)
    {
        *dest1 = *src1;
        dest1++;
        src1++;
        n--;
    }
    return (dest);
}

int main()
{
    char oi[10] = "ola";
    printf("mine %s\n", (char *)ft_memcpy(oi, "banako", 3));
    printf("their %s\n", (char *)memcpy(oi, "banako", 3));
}