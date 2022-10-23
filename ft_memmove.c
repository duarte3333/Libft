/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsa-mora <dsa-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 14:34:00 by dsa-mora          #+#    #+#             */
/*   Updated: 2022/10/22 14:34:00 by dsa-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//Esta funcao e meia gay
//memcpy com malloc
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dest1;
	char	*src1;
	char	*tmp;
	int		tmp_n;
	int		i;

	tmp = (char *)malloc(sizeof(char) * n);
	dest1 = (char *)dest;
	src1 = (char *)src;
	tmp_n = n;
	i = 0;
	if (tmp == NULL)
		return (NULL);
	else
	{
		while (tmp_n--)
		{
			tmp[i] = src1[i];
			i++;
		}
		i = 0;
		while (n--)
		{
			dest1[i] = tmp[i];
			i++;
		}
	}
	free(tmp);
	return (dest1);
}

// int main()
// {
//     char oi[10] = "ola";
//     printf("mine %s\n", (char *)ft_memmove(oi, "banako", 4));
//     printf("their %s\n", (char *)memmove(oi, "banako", 4));
// }