#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
		j++;
	return (j);
}

//Funciona como strncpy mas garante o terminio da str com \0
//copia size - 1 elementos e para garantir o \0 no final
//Versao melhorada do strncpy
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_size;

	src_size = ft_strlen(src);
	if (size != 0)
	{
		while (*src && (size - 1))
		{
			*dest = *src;
			dest++;
            src++;
            size--;
		}
		*dest = '\0';
	}
	return (src_size);
}

// int main()
// {
//     char dest[10] = "ola";
//     char src[10] = "banako";
//     ft_strlcpy(dest, src, 3);
//     printf("mine %s\n", dest);
// }