/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaude <ygaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 10:59:20 by ygaude            #+#    #+#             */
/*   Updated: 2016/11/23 10:33:57 by ygaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int			countwd(const char *s, char c)
{
	int		i;
	int		inwd;
	int		wdcount;

	i = 0;
	inwd = 0;
	wdcount = 0;
	while (s && s[i])
	{
		if ((inwd && s[i] == c) || (!inwd && s[i] != c))
		{
			inwd = !inwd;
			wdcount += inwd;
		}
		i++;
	}
	return (wdcount);
}

static int			nextwd(const char *s, char c)
{
	int		i;

	i = 0;
	while (s && s[i] && s[i] != c)
		i++;
	while (s && s[i] && s[i] == c)
		i++;
	return (i);
}

static size_t		wdlen(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

char				**ft_strsplit(const char *s, char c)
{
	int		i;
	int		wdindex;
	int		wdcount;
	char	**res;

	i = 0;
	wdindex = 0;
	wdcount = countwd(s, c);
	res = (char **)malloc(sizeof(char *) * wdcount + 1);
	while (i < wdcount)
	{
		wdindex = nextwd(&s[i], c);
		res[i] = ft_strsub(s, wdindex, wdlen(&s[wdindex], c));
	}
	return (res);
}
