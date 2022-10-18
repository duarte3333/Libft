#include "libft.h"
//Esta funcao aplica a funcao f a cada elemento de s
//e aloca memoria para str, definindo-a como a string
//que f retorna e pegando nessa string 
//e retornando-a na ft_strmapi()

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}