/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaude <ygaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 16:24:58 by ygaude            #+#    #+#             */
/*   Updated: 2016/11/22 11:07:17 by ygaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					ft_isspace(char c)
{
	return (c == '\t' || c == '\n' || c == ' ');
}