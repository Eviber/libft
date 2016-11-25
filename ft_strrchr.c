/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaude <ygaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 19:47:35 by ygaude            #+#    #+#             */
/*   Updated: 2016/11/24 18:01:18 by ygaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strrchr(const char *s, int c)
{
	char	*res;

	res = (char *)ft_memchr(s, c, ft_strlen(s) + 1);
	while (res)
		res = (char *)ft_memchr(res, c, ft_strlen(res) + 1);
	return (res);
}
