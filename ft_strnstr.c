/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaude <ygaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 12:41:36 by ygaude            #+#    #+#             */
/*   Updated: 2016/11/09 13:48:38 by ygaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

static int			checkwd(char *tocheck, const char *model, size_t len)
{
	size_t	i;

	i = 0;
	while (tocheck[i] == model[i] && i < len)
		i++;
	if (!tocheck[i] || !(i < len))
		return (1);
	return (0);
}

char				*ft_strnstr(const char *big, const char *small, size_t len)
{
	char	*res;
	int		i;
	int		max;

	i = 0;
	res = NULL;
	max = ft_strlen(big) - ft_strlen(small);
	while (i < max && !checkwd((char *)&big[i], small, len))
		i++;
	return (res);
}
