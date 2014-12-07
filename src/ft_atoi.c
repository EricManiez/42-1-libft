/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:13:08 by emaniez           #+#    #+#             */
/*   Updated: 2014/11/12 11:30:24 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrimnonprint(const char *str)
{
	int		strlen;
	int		lsp;
	int		i;
	char	*scp;

	strlen = ft_strlen(str);
	lsp = 0;
	i = -1;
	while (++i < strlen && str[i] < 33)
		lsp++;
	while (strlen > 0 && ft_isdigit(str[strlen - 1]) == 0
			&& str[strlen - 1] != '-' && str[strlen - 1] != '+')
		strlen--;
	if (strlen < lsp)
		strlen = lsp;
	if (!(scp = (char*)malloc(strlen - lsp + 1)) || !str)
		return (NULL);
	i = -1;
	while (++i < strlen - lsp)
		scp[i] = str[i + lsp];
	scp[i] = '\0';
	return (scp);
}

int		ft_atoi(const char *str)
{
	int		i;
	int		j;
	int		numlen;
	int		res;
	char	*strdup;

	i = 0;
	j = 0;
	res = 0;
	strdup = ft_strtrimnonprint(str);
	if (ft_isdigit(strdup[0]) == 0 && strdup[0] != '-' && strdup[0] != '+')
		return (0);
	if (strdup[0] == '-' || strdup[0] == '+')
		j = 1;
	while (ft_isdigit(strdup[i + j]) == 1)
		i++;
	numlen = i - 1;
	while (--i >= 0)
		res = res + (((strdup[i + j]) - 48) * ft_pow(10, (numlen - i)));
	if (strdup[0] == '-')
		res = res * -1;
	return (res);
}
