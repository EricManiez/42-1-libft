/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_conv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 14:54:29 by emaniez           #+#    #+#             */
/*   Updated: 2015/03/05 14:57:12 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** A generic "decimal to hexadecimal" converter.
** Two extra functionalities :
** 	- "memswitch" : when activated (== 1), prints leading "0x" for use in
**		  memory-related applications
**	- "caps" : when activated (== 'X'), all letters turned to caps
*/

#include "libft.h"

static void			hex_conv_sub(unsigned long dec, char **hex)
{
	unsigned long	mid;

	mid = dec % 16;
	if (mid > 9)
		*(hex) = ft_charjoin(*hex, mid + 87);
	else
		*(hex) = ft_strjoin(*hex, ft_itoa(mid));
	dec /= 16;
	while (dec)
	{
		mid = dec % 16;
		if (mid > 9)
			*(hex) = ft_charjoin_f(hex, mid + 87);
		else
			*(hex) = ft_strjoin_fl(hex, ft_itoa(mid));
		dec /= 16;
	}
}

char				*ft_dec2hex(unsigned long dec, int memswitch, char caps)
{
	char			*hex;

	hex = "";
	hex_conv_sub(dec, &hex);
	if (memswitch)
		hex = ft_strjoin_fl(&hex, "x0");
	if (caps == 'X')
		hex = ft_toupperstr(hex);
	return (ft_strrev(hex));
}
