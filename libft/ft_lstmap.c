/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayazikoz <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 03:41:27 by ayazikoz          #+#    #+#             */
/*   Updated: 2023/07/08 03:41:46 by ayazikoz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*resfct;

	(void)del;
	if (!lst || !f)
		return (NULL);
	resfct = ft_lstnew(f(lst->content));
	if (!(resfct))
		return (NULL);
	res = resfct;
	lst = lst->next;
	while (lst)
	{
		resfct = ft_lstnew(f(lst->content));
		if (!(resfct))
		{
			ft_lstclear(&resfct, del);
			break ;
		}
		lst = lst->next;
		ft_lstadd_back(&res, resfct);
	}
	return (res);
}
