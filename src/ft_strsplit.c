/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 10:53:30 by emaniez           #+#    #+#             */
/*   Updated: 2014/11/12 10:22:33 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		ft_char_count(char const *s, char c)
{
	int		i;
	int		totlen;

	i = -1;
	totlen = 0;
	while (s[++i])
	{
		if (s[i] != c)
			totlen++;
	}
	return (totlen);
}

int		ft_word_count(char const *s, char c)
{
	int		i;
	int		numw;

	i = -1;
	numw = 0;
	while (s[++i])
	{
		if (s[i] != c && s[i - 1] == c)
			numw++;
	}
	if (s[0] != c)
		numw++;
	return (numw);
}

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	int		numw;
	char	**res;

	numw = ft_word_count(s, c);
	if (!(res = (char**)ft_memalloc((sizeof(char*) * numw + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] && j < numw)
	{
		k = 0;
		while (s[i] == c)
			i++;
		--i;
		while (s[++i] != c)
			k++;
		res[j] = ft_strsub(s, (i - k), k);
		j++;
	}
	res[j] = '\0';
	return (res);
}
