#include "libft.h"

int ft_checknexts(char *big, char *little)
{
    while (*little && (*big == *little))
    {
        if (*big == *little)
        {
            //printf("big: %c\n", *big);
            //printf("little: %c\n", *little);
            big++;
            little++;
        }  
        else
            return (0);    
    }
    if (*little == 0)
        return (1);
    return (0);
    
}

//Esta funcao procura o little ate len e caso encontre
//retorna o o big desde o primeiro elemento onde encontrou o little
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
            //printf("Abig: %c\n", *big);
            //printf("Alittle: %c\n", *little);
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
//     printf("mine %s\n", ft_strnstr("dolor sit amet", "dolor", 5));
//     //printf("their %i\n", strnstr(oi, "n", 4));
// }