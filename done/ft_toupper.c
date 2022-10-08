#include <stdio.h>

int	ft_toupper(int i)
{
	if (i >= 'a' && i <= 'z')
		return (i - 32);
	return (i);
}

// int main()
// {
//     printf("%i", ft_toupper(94));
// }