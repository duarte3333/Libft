/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsa-mora <dsa-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:30:06 by dsa-mora          #+#    #+#             */
/*   Updated: 2022/10/23 16:41:16 by dsa-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct s_list{
	int				data;
	struct s_list	*next;
}	t_list;

// void	ft_lstadd_front(t_list **lst, t_list *new)
// {
// 	t_list	*temp;
// 	t_list	*current;

// 	temp = *lst;
// 	current = *lst;
// 	while (current)
// 	{
// 		current->data = current->next->data;
// 		current->next = current->next->next;
// 		current = current->next;
// 	}
// 	current = temp;
// 	current->data = new->data;
// 	current->next = new->next;
// }

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst)
	{
		if (*lst)
			new->next = *lst;
		*lst = new;
	}
}

// int main()
// {
// 	t_list	**p;
// 	t_list	*head = NULL;
// 	t_list	*second = NULL;
// 	t_list	*third = NULL;
// 	t_list	*new = NULL;

// 	new = (t_list *)malloc(sizeof(t_list));
// 	head = (t_list *)malloc(sizeof(t_list));
// 	second = (t_list *)malloc(sizeof(t_list));
// 	third = (t_list *)malloc(sizeof(t_list));

// 	head->data = 1;
// 	head->next = second;
// 	second->data = 2;
// 	second->next = third;
// 	third->data = 3;
// 	third->next = NULL;

// 	new->data = 10;
// 	new->next = NULL;
// 	p = &head;
// 	//printf("%i\n", ft_lstadd_front(p, new));
// 	ft_lstadd_front(p, new);
// 	while (head)
// 	{
// 		printf("%i\n", (head)->data);
// 		head = head->next;
// 	}
// }
