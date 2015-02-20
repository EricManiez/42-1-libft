/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/20 13:48:34 by emaniez           #+#    #+#             */
/*   Updated: 2015/02/20 15:24:12 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MLX_H
# define FT_MLX_H
# include <mlx.h>
# include <unistd.h>
# include <stdlib.h>
# include <math.h>
# include "libft.h"
# include <fcntl.h>
# include <errno.h>
# include <string.h>
# include "libft.h"

# define K_ESC 65307
# define K_LEFT 65361
# define K_UP 65362
# define K_RIGHT 65363
# define K_DOWN 65364
# define K_PGUP 65365
# define K_PGDWN 65366
# define K_PL 65451
# define K_MIN 65453
# define K_P 112
# define K_I 105
# define K_C 99
# define K_R 114
# define K_G 103
# define K_B 98
# define K_L 108
# define K_O 111
# define WIN_W 1280
# define WIN_H 1280
# define RGB(r, g, b)(256 * 256 * (int)(r) + 256 * (int)(g) + (int)(b))

typedef struct	s_mlx
{
	void		*ptr;
	void		*win;
	void		*img;
	char		*img_addr;
	int			bbp;
	int			endian;
	int			line_size;
	int			zoom;
	int			legend;
}				t_env;

typedef struct	s_coord
{
	int			x;
	int			y;
	int			z;
}				t_coord;

typedef struct	s_col
{
	int			r;
	int			g;
	int			b;
}				t_col;

void			mlx_initiate(t_env *mlx, char *name);

void			mlx_draw_img_pix(t_env *mlx, int addr, int color);

void			mlx_draw_line(t_coord one, t_coord two, t_env *mlx, int color);

void			alloc_error();

#endif
