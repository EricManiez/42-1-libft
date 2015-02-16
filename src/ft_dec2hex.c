/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_conv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 14:54:29 by emaniez           #+#    #+#             */
/*   Updated: 2015/02/14 14:37:28 by emaniez          ###   ########.fr       */
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

	while (dec)
	{
		mid = dec % 16;
		if (mid == 10)
			*(hex) = ft_charjoin(*(hex), 'a');
		else if (mid == 11)
			*(hex) = ft_charjoin(*(hex), 'b');
		else if (mid == 12)
			*(hex) = ft_charjoin(*(hex), 'c');
		else if (mid == 13)
			*(hex) = ft_charjoin(*(hex), 'd');
		else if (mid == 14)
			*(hex) = ft_charjoin(*(hex), 'e');
		else if (mid == 15)
			*(hex) = ft_charjoin(*(hex), 'f');
		else
			*(hex) = ft_strjoin(*(hex), ft_itoa(mid));
		dec /= 16;
	}
}

char				*ft_dec2hex(unsigned long dec, int memswitch, char caps)
{
	char			*hex;

	hex = "";
	if (dec == 0)
		hex = "0";
	hex_conv_sub(dec, &hex);
	if (memswitch)
		hex = ft_strjoin(hex, "x0");
	if (caps == 'X')
		hex = ft_toupperstr(hex);
	return (ft_strrev(hex));
}
