/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3D.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntairatt <ntairatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 15:54:41 by ntairatt          #+#    #+#             */
/*   Updated: 2024/02/05 12:19:38 by ntairatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <errno.h>
# include <math.h>
# include "mlx.h"
# include "libft.h"
# include "cub3D_struct.h"

/* main */

int		init_data(t_data *prog, char *filename);
void	file_read(t_data *prog);
int		bg_init(t_data *prog, char *line);
void	rgb_init(t_data *prog, char *line);
void	wall_init(t_data *prog, char **str);
int		map_read(t_data *prog);
char	*remove_nextline(char *line);

/* RGB */
int		rgb_interpret(t_data *prog);

/* Map_read */
int		map_add(t_data *prog, char *line);
int		map_check(t_data *prog);

/* mlx */
void	init_mlx(t_data *prog);
void	paint_pixel(t_data *prog, size_t x, size_t y, int color);

/* key destroy */
int		key_esc(int keycode, t_data *prog);
int		win_cross(t_data *prog);

/* wall_set */
int		wall_set(t_data *prog);

/* utils 1 */
void	ft_free_str2d(char **str);
size_t	ft_str2dlen(char **str);
void	exit_message(t_data *prog, char *str1, char *str2, char *str_free);
void	free_prog(t_data *prog);
int		ft_iscub(char *file_name);

/* utils 2 */
char	**ft_realloc2d(char **ptr, size_t size);

/* raycast */
void	raycast(t_data *prog);
void	raycast_util(t_data *prog, int x);

#endif
