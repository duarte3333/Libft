/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsa-mora <dsa-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 22:24:27 by dsa-mora          #+#    #+#             */
/*   Updated: 2022/10/25 17:54:35 by dsa-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Esta funcao cria uma linked list de um elemento
t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = NULL;
	new = (t_list *)malloc(sizeof(t_list));
	new->content = content;
	new->next = NULL;
	return (new);
}

// int main()
// {
// 	int a = 19;

// 	printf("%i\n", *(int *)ft_lstnew(&a)->data);
// }