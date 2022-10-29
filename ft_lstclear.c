/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsa-mora <dsa-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:46:40 by dsa-mora          #+#    #+#             */
/*   Updated: 2022/10/29 14:04:58 by dsa-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_lstclear(t_list **lst, void (*del)(void*))
// {
// 	if (!del || !lst || !*lst)
// 		return ;
// 	while (lst)
// 	{
// 		while (*lst)
// 		{
// 			(*del)((*lst)->content);
// 			free(*lst);
// 			*lst = (*lst)->next;
// 		}
// 		lst++;
// 	}
// }

// void	ft_lstclear(t_list **lst, void (*del)(void*))
// {
// 	while (*lst)
// 	{
// 		(*del)((*lst)->content);
// 		free(*lst);
// 		*lst = (*lst)->next;
// 	}
// }

// return ; serve para sair da funcao
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;

	if (!del || !lst || !*lst)
		return ;
	while (*lst)
	{
		next = (*lst)->next;
		(*del)((*lst)->content);
		free(*lst);
		*lst = next;
	}
}
