/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaude <ygaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 19:47:35 by ygaude            #+#    #+#             */
/*   Updated: 2016/11/08 20:04:20 by ygaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	char	*res;

	res = (char *)memchr(s, c, strlen(s) + 1);
	while (res)
		res = (char *)memchr(res, c, strlen(res) + 1);
	return (res);
}
