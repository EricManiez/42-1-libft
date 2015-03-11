/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupperstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/19 09:51:00 by emaniez           #+#    #+#             */
/*   Updated: 2015/03/10 13:35:29 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_toupperstr(char *s)
{
	int		i;

	i = -1;
	while (s[++i])
		s[i] = ft_toupper(s[i]);
	return (s);
}
