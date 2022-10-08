#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		size;
	char	*dest;
	int		i;

	size = ft_strlen(src);
	dest = (char *)malloc((size + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int		main(void)
// {
// 	char	*str;
// 	char	*str_copy;

// 	str = "Test string.";
// 	str_copy = ft_strdup(str);
// 	if (strcmp(str, str_copy) != 0)
// 		printf("KO, string is not the same.\n");
// 	else
// 		printf("OK.\n");
// 	str = "";
// 	str_copy = ft_strdup(str);
// 	if (strcmp(str, str_copy) != 0)
// 		printf("KO, string is not the same.\n");
// 	else
// 		printf("OK.\n");
// 	str = "eeeeeeee vida de gado";
// 	str_copy = ft_strdup(str);
// 	if (strcmp(str, str_copy) != 0)
// 		printf("KO, string is not the same.\n");
// 	else
// 		printf("OK.\n");
// 	return (0);
// }