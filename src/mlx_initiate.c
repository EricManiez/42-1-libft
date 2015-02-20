/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_initiate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/18 11:03:35 by emaniez           #+#    #+#             */
/*   Updated: 2015/02/20 14:04:11 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mlx.h"

/*
** Initiates all the stuff to start working with mlx.
** Also creates an image and stores the adress within mlx struct.
*/

void	alloc_error(void)
{
	ft_printf("\nfdf : Allocation failed, image too big! Exiting...\n\n");
	exit (-1);
}

void	mlx_initiate(t_env *mlx, char *name)
{
	mlx->legend = 1;
	mlx->bbp = 32;
	mlx->line_size = WIN_W * 4;
	mlx->endian = ft_endianness();
	mlx->ptr = mlx_init();
	mlx->win = mlx_new_window(mlx->ptr, WIN_W, WIN_H, name);
	if (!(mlx->img = mlx_new_image(mlx->ptr, WIN_W, WIN_H)))
		alloc_error();
	mlx->img_addr =
		mlx_get_data_addr(mlx->img, &mlx->bbp, &mlx->line_size, &mlx->endian);
}
