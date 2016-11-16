/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaude <ygaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 15:19:52 by ygaude            #+#    #+#             */
/*   Updated: 2016/11/16 16:48:25 by ygaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *s1, char *s2, size_t n)
{
	size_t	i;
	size_t	start;

	i = 0;
	start = ft_strlen(s1);
	while (s2[i] && i < n - 1)
	{
		s1[i + start] = s2[i];
		i++;
	}
	s1[i + start] = '\0';
	return (start + n);
}
