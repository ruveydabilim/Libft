/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbilim <rbilim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 16:37:45 by rbilim            #+#    #+#             */
/*   Updated: 2025/06/15 19:21:57 by rbilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/* int main()
{	
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*node4;

	node1 = ft_lstnew(node1);
	node2 = ft_lstnew(node2);
	node3 = ft_lstnew(node3);
	node4 = ft_lstnew(node4);

	node4->content = "I did it";

	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = NULL;
	t_list *last = ft_lstlast(node1);
	printf("%s", (char *)last->content);
} */
