#include <stdio.h>

int	ft_tolower(int i)
{
	if (i >= 'A' && i <= 'Z')
		return (i + 32);
	return (i);
}

// int main()
// {
//     printf("%i", ft_tolower(65));
// }