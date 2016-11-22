/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaude <ygaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 05:38:27 by ygaude            #+#    #+#             */
/*   Updated: 2016/11/22 11:08:31 by ygaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void			*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*buf;

	buf = (char *)malloc(len);
	ft_memcpy(buf, src, len);
	ft_memcpy(dst, buf, len);
	return (dst);
}
