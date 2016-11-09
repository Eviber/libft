/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaude <ygaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 00:47:39 by ygaude            #+#    #+#             */
/*   Updated: 2016/11/07 04:12:31 by ygaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*psrc;
	unsigned char	*pdst;
	size_t			i;

	psrc = (unsigned char *)src;
	pdst = (unsigned char *)dst;
	i = 0;
	while (i < n)
		pdst[i] = psrc[i];
	return (dst);
}