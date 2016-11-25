/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaude <ygaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 15:30:53 by ygaude            #+#    #+#             */
/*   Updated: 2016/11/22 11:10:29 by ygaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char				*ft_strmap(const char *s, char (*f)(char))
{
	int		i;
	char	*res;

	if (!s || !f)
		return (NULL);
	res = malloc(sizeof(char) * (ft_strlen(s)));
	if (!res)
		return (NULL);
	i = -1;
	while (s[++i])
		res[i] = f(s[i]);
	res[i] = '\0';
	return (res);
}