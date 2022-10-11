#include <stdio.h>

int ft_checknexts(char *big, char *little)
{
    while (*little)
    {
        if (*big == *little)
        {
            big++;
            little++;
        }  
        else
            return (0);    
    }
    if (*big == '\0')
        return (1); 
    else
        return (0);
    
}

//Esta funcao procura o little seguido de \0 ate len e caso encontre
//retorna o little
//Ou seja, o little tem de estar no final da string
char 	*ft_strnstr (const char *big, const char *little, size_t len)
{
    const char *temp;

    temp = little;
    if (*little == '\0' || little == NULL)
        return ((char *)big);
    while (*big && len)
    {
        little = temp;
        while (*little)
        {
            if ((*big == *little) && ft_checknexts((char *)big, (char *)temp))
                return ((char *)big);
            little++;
        }
        big++;
        len--;
    }
    return (0);

}

// int main ()
// {
//     char oi[1000] = "dsutesqdweasasdsda";
//     printf("mine %s\n", ft_strnstr(oi, "sda", 1000));
//     //printf("their %i\n", strnstr(oi, "n", 4));
// }