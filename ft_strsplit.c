/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaude <ygaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 10:59:20 by ygaude            #+#    #+#             */
/*   Updated: 2016/11/22 16:51:21 by ygaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		countwd(const char *s, char c)
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

static void		*nextwd(char **s, char c)
{
	if (s && *s)
	{
		while (**s && **s != c)
			*s++;
		while (**s && **s == c)
			*s++;
	}
}

static int		wdlen(char *s, char c)
{
	int		len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

char			**ft_strsplit(const char *s, char c)
{
	int		i;
	int		wdcount;
	char	**res;

	i = 0;
	wdcount = countwd(s, c);
	res = (char **)malloc(sizeof(char *) * wdcount + 1);
	while (i < wdcount)
	{
		ft_strdup();
	}
}
