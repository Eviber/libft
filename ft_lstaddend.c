/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaude <ygaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 17:26:34 by ygaude            #+#    #+#             */
/*   Updated: 2016/11/25 18:12:49 by ygaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_lstaddend(t_list **alst, t_list *new)
{
	t_list	*plist;

	if (!new)
		return ;
	if (!*alst)
	{
		*alst = new;
		return ;
	}
	plist = ft_lstend(*alst);
	plist->next = new;
}
