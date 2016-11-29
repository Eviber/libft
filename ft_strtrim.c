/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaude <ygaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 12:10:12 by ygaude            #+#    #+#             */
/*   Updated: 2016/11/29 16:17:25 by ygaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strtrim(const char *s)
{
	unsigned int	start;
	unsigned int	i;
	size_t			len;
	char			*res;

	i = 0;
	while (ft_isspace(s[i]))
		i++;
	start = i;
	i = ft_strlen(s) - 1;
	while (i > start && ft_isspace(s[i]))
		i--;
	if (!i || i < start)
		return (ft_strdup(""));
	i++;
	len = i - start;
	res = ft_strsub(s, start, len);
	return (res);
}
