/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 17:17:52 by emaniez           #+#    #+#             */
/*   Updated: 2014/11/05 14:47:58 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		index;
	char	*dst;

	index = -1;
	dst = (char*)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	while (s1[++index])
		dst[index] = s1[index];
	dst[index] = '\0';
	return (dst);
}
