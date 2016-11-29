/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaude <ygaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 12:41:36 by ygaude            #+#    #+#             */
/*   Updated: 2016/11/29 15:17:21 by ygaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char				*ft_strnstr(const char *big, const char *small, size_t len)
{
	char	*ptr;

	ptr = (char *)big;
	len -= ft_strlen(small) - 1;
	while ((*ptr || !*small) && len)
	{
		if (!*small || !ft_strncmp(ptr, small, ft_strlen(small) - 1))
			return(ptr);
		ptr++;
		len--;
	}
	return (NULL);
}
