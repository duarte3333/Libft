#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dlen;
	unsigned int	slen;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	dlen = i;
	slen = ft_strlen(src);
	if (size == 0 || size <= dlen)
	{
		return (slen + size);
	}
	while (src [j] != '\0' && (j + 1 < (size - dlen)))
	{
		dest[j + i] = src [j];
		j++;
	}
	dest[dlen + j] = '\0';
	return (dlen + slen);
}