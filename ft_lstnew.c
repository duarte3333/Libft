/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsa-mora <dsa-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 22:24:27 by dsa-mora          #+#    #+#             */
/*   Updated: 2022/10/23 15:29:25 by dsa-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct s_list{
	void			*data;
	struct s_list	*next;
}	t_list;


t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = NULL;
	new = (t_list *)malloc(sizeof(t_list));
	new->data = content;
	new->next = NULL;
	return (new);
}

// int main()
// {
// 	int a = 19;

// 	printf("%i\n", *(int *)ft_lstnew(&a)->data);
// }