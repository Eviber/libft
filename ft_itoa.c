/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaude <ygaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 10:38:02 by ygaude            #+#    #+#             */
/*   Updated: 2016/11/23 15:14:15 by ygaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void			addchar(char c, char *str)
{
	int		i;

	i = 0;
	while (str[i] && str[i] != 1)
		i++;
	str[i] = str[i] ? '\0' : c;
}

static void			itoa_rec(unsigned int n, char *str)
{
	if (n < 10)
		addchar(n - '0', str);
	else
	{
		itoa_rec(n / 10, str);
		itoa_rec(n % 10, str);
	}
}

static char			*initstr(int n)
{
	size_t	size;
	char	*str;

	size = (size_t)ft_magnitude(n);
	str = ft_strnew(size);
	ft_memset(str, 1, size);
	return (str);
}

char				*ft_itoa(int n)
{
	char	*res;

	res = initstr(n);
	if (n < 0)
		addchar('-', res);
	itoa_rec(n, res);
	return (res);
}
