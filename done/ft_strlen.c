#include <unistd.h>
#include <stdio.h>

size_t ft_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

// int main(void)
// {
//     printf("%i", ft_strlen("duarte"));
// } 