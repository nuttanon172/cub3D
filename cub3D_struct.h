/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3D_struct.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntairatt <ntairatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 15:54:38 by ntairatt          #+#    #+#             */
/*   Updated: 2024/02/06 18:17:59 by ntairatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_STRUCT_H
# define CUB3D_STRUCT_H

# define WIN_WIDTH 800
# define WIN_HEIGHT 600

# define SENS 2.5
# define ON_KEYDOWN 2
# define ON_KEYUP 3
# define ON_DESTROY 17

# define KEY_PRESSED 1
# define KEY_RELEASED 0

# define KEY_W 13
# define KEY_A 0
# define KEY_S 1
# define KEY_D 2
# define KEY_ESC 53
# define KEY_LEFT 123
# define KEY_RIGHT 124

# define X_EVENT_KEY_PRESS		2
# define X_EVENT_KEY_RELEASE	3

# define TEXTURE_WIDTH 64
# define TEXTURE_HEIGHT 64

# define L 0x33001a
# define I 0x00000033
# define N 0x1a000d
# define E 0x00999999


typedef struct s_player
{
	double	dirX;
	double	dirY;
	double	planeX;
	double	planeY;
	double	posX;
	double	posY;
	double	cameraX;
	double	rayDirX;
	double	rayDirY;
	double	sideDistX;
	double	sideDistY;
	double	deltaDistX;
	double	deltaDistY;
	double	perpWallDist;
	double	frameTime;
	double	moveSpeed;
	double	rotSpeed;
	double	wallX;
	int		texX;
	int		texY;
	int		mapX;
	int		mapY;
	int		stepX;
	int		stepY;
	int		hit;
	int		side;
	int		drawStart;
	int		lineHeight;
	int		drawEnd;
	int		texture_nbr;
	unsigned int	color;
}				t_player;

typedef struct s_img
{
	void	*img_ptr;
	int		*img_addr;
	int		bits_per_pixel;
	int		size_line;
	int		endian;
	int		width;
	int		height;
}				t_img;

typedef struct s_key
{
	int		w;
	int		a;
	int		s;
	int		d;
	int		arrow_right;
	int		arrow_left;
}				t_key;

typedef struct s_mlx
{
	void	*mlx;
	void	*window;
}				t_mlx;

typedef struct s_data2
{
	int		res_x;
	int		res_y;
	int		startx;
	int		starty;
}				t_data2;
typedef struct s_data
{
	int				fd;
	char			**map;
	char			*xpm[5];
	char			*rgb[3];
	unsigned int	floor_color;
	unsigned int	ceiling_color;
	int				wall_arr[4][TEXTURE_WIDTH * TEXTURE_WIDTH];
	t_player		p;
	t_mlx			mlx;
	t_img			img_src[5];
	t_img			img;
	t_key			key;
}				t_data;

#endif
