#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_size_concact(char **strs, int size)
{
	int		size_concat;
	int		size_str;
	int		i;

	i = 0;
	size_concat = 0;
	while (i < size)
	{
		size_str = ft_strlen(strs[i]);
		size_concat += size_str;
		i++;
	}
	return (size_concat);
}

char	*fill_concat(char *concat, int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		g;
	int		size_str;
	int		index_concat;

	i = -1;
	index_concat = -1;
	while ((++i) < size)
	{
		size_str = ft_strlen(strs[i]);
		j = -1;
		while ((++j) < size_str)
			concat[++index_concat] = strs[i][j];
		g = -1;
		while (sep[++g] != '\0')
		{
			if (i == (size - 1))
				break ;
			concat[++index_concat] = sep[g];
		}
	}
	return (concat);
}

//Esta funcao recebe um lista de strings e junta-as colocando
//um separador entre cada uma delas, tudo numa unica string
char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		size_concat;
	char	*concat_final;
	char	*concat;

	if (size == 0)
		return ((char *)malloc(0 * sizeof(char)));
	size_concat = ft_size_concact(strs, size) + (size - 1) * ft_strlen(sep);
	concat = (char *)malloc((size_concat + 1) * sizeof(char));
	concat[size_concat] = 0;
	concat_final = fill_concat(concat, size, strs, sep);
	return (concat_final);
}

// int	main(void)
// {
// 	char	**strs;
// 	char	*separator;
// 	char	*result;
// 	int	size;

// 	size = 3;
// 	strs = (char **)malloc(3 * sizeof(char *));
// 	strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
// 	strs[1] = (char *)malloc(sizeof(char) * 7 + 1);
// 	strs[2] = (char *)malloc(sizeof(char) * 14 + 1);
// 	strs[0] = "Hello";
// 	strs[1] = "friend,";
// 	strs[2] = "you are awesome";
// 	separator = "BOY";
// 	result = ft_strjoin(size, strs, separator);
// 	printf("%s$\n", result);
// 	free(result);
// }