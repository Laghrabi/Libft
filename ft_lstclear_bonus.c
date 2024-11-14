/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claghrab <claghrab@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 20:20:37 by claghrab          #+#    #+#             */
/*   Updated: 2024/11/11 20:21:17 by claghrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		current = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = current;
	}
}
// int main()
// {
//     t_list *node1 = ft_lstnew(ft_strdup("ziad"));
//     t_list *node2 = ft_lstnew(ft_strdup("chaymaa"));
//     t_list *node3 = ft_lstnew(ft_strdup("mimi"));

//     node1->next = node2;
//     node2->next = node3;

//     ft_lstclear(&node1, &del);
//     printf("%s", node3->content);
//     system("leaks a.out");
// }