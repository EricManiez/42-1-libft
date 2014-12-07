/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 10:44:12 by emaniez           #+#    #+#             */
/*   Updated: 2014/11/11 10:32:39 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		totlen;
	char	*cat;

	i = -1;
	j = -1;
	totlen = ft_strlen(s1) + ft_strlen(s2);
	if (!(cat = (char*)malloc(totlen + 1)))
		return (NULL);
	while (s1[++i])
		cat[i] = s1[i];
	while (s2[++j])
	{
		cat[i] = s2[j];
		i++;
	}
	cat[i] = '\0';
	return (cat);
}
