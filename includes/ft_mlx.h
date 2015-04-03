/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/20 13:48:34 by emaniez           #+#    #+#             */
/*   Updated: 2015/04/03 12:01:10 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MLX_H
# define FT_MLX_H
# include <mlx.h>
# include <math.h>
# include <fcntl.h>
# include <errno.h>
# include <libft.h>

# define K_ESC 53
# define K_LEFT 123
# define K_RIGHT 124
# define K_DOWN 125
# define K_UP 126
# define K_PGUP 116
# define K_PGDWN 121
# define K_PL 69
# define K_MIN 78
# define K_A 0
# define K_B 11
# define K_C 8
# define K_D 2
# define K_G 5
# define K_I 34
# define K_L 37
# define K_O 31
# define K_P 35
# define K_R 15
# define K_S 1
# define K_W 13

# define WIN_W 400
# define WIN_H 400
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
	int			imgx;
	int			imgy;
	void		*data;
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

void			mlx_draw_circle(t_coord *ctr, int rad, t_env *mlx, int color);

int				mlx_coord_2_addr(size_t x, size_t y, t_env *mlx);

#endif
