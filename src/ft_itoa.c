/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 11:13:59 by emaniez           #+#    #+#             */
/*   Updated: 2014/11/12 10:23:44 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_itoa(int n)
{
	int		i;
	int		j;
	int		numlen;
	char	*res;

	i = -1;
	j = 0;
	if (n == -2147483648)
		return ("-2147483648");
	numlen = ft_numlen(n);
	if (n < 0)
		j = 1;
	if (n < 0)
		n = n * -1;
	if (!(res = (char*)malloc(numlen + j)))
		return (NULL);
	while (++i < numlen + j)
	{
		res[i + j] = (n / ft_pow(10, numlen - i - 1)) + 48;
		n = n - ((n / ft_pow(10, numlen - i - 1)) * ft_pow(10, numlen - i - 1));
	}
	if (j == 1)
		res[0] = '-';
	res[i] = '\0';
	return (res);
}
