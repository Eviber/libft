/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaude <ygaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 18:14:30 by ygaude            #+#    #+#             */
/*   Updated: 2016/11/26 10:52:31 by ygaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*res;

	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		ft_lstaddend(&res, f(lst));
		res = res->next;
		lst = lst->next;
	}
	return (res);
}
