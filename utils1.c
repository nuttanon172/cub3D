#include "cub3D.h"

void	ft_free_str2d(char **str)
{
	size_t	i;

	i = 0;
	if (!str)
		return ;
	while (str[i])
		free(str[i++]);
	free(str);
}

size_t	ft_str2dlen(char **str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

void	free_prog(t_data *prog)
{
	if (prog->map)
		ft_free_str2d(prog->map);
	//if (prog->mlx.window)
	//	mlx_destroy_window(prog->mlx.mlx, prog->mlx.window);
}

void	exit_error(t_data *prog, char *str1, char *str2)
{
	ft_putstr_fd("Error\n", 2);
	ft_putstr_fd(str1, 2);
	ft_putstr_fd(str2, 2);
	ft_putstr_fd("\n", 2);
	close(prog->fd);
	exit(EXIT_FAILURE);
}
