/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_arr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/14 13:49:27 by emaniez           #+#    #+#             */
/*   Updated: 2015/02/14 14:04:59 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Frees all elements located in "arr" array, and sets all addresses to NULL.
** Applies same effect to the array address itself.
*/

void	free_arr(void *arr)
{
	void	**a;

	a = arr;
	while (*a)
	{
		free(*a);
		*a = NULL;
		a++;
	}
	free(arr);
	arr = NULL;
}
