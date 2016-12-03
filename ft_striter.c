/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaude <ygaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 16:02:56 by ygaude            #+#    #+#             */
/*   Updated: 2016/12/01 08:20:11 by ygaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void				ft_striter(char *s, void (*f)(char *))
{
	int	i;

	i = 0;
	while (f && s && s[i])
		f(&(s[i++]));
}
