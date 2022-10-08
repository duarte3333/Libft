#include <unistd.h>
#include <stdio.h>

int ft_isalnum(int i)
{
    if ((i >= '0' && i <= '9'))
        return (1);
    else if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'))
        return (1);
    return (0);
}

int main(void)
{
    printf("%i", ft_isalnum(65));
} 