/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaude <ygaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 20:13:09 by ygaude            #+#    #+#             */
/*   Updated: 2016/11/09 13:50:34 by ygaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

static int			checkwd(char *tocheck, const char *model)
{
	int		i;

	i = 0;
	while (tocheck[i] == model[i])
		i++;
	if (!tocheck[i])
		return (1);
	return (0);
}

char				*ft_strstr(const char *big, const char *small)
{
	char	*res;
	int		i;
	int		max;

	i = 0;
	res = NULL;
	max = ft_strlen(big) - ft_strlen(small);
	while (i < max && !checkwd((char *)&big[i], small))
		i++;
	return (res);
}
