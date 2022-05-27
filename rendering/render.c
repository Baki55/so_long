/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 23:42:22 by bkhatib           #+#    #+#             */
/*   Updated: 2022/05/27 23:43:14 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

char	*ft_get_image(char c, int can_exit)
{
	char	*img_path;

	(void)can_exit;
	img_path = NULL;
	if (c == '1')
		img_path = "sprites/wall.xpm";
	else if (c == '0')
		img_path = "sprites/ground.xpm";
	else if (c == 'C')
		img_path = "sprites/collec.xpm";
	else if (c == 'P')
		img_path = "sprites/player.xpm";
	else if (c == 'E')
	{
		if (can_exit)
			img_path = "sprites/is_open.xpm";
		else
			img_path = "sprites/is_closed.xpm";
	}
	return (img_path);
}
void	render_images_action(t_program game, int x, int y)
{
	char	*img_path;

	if (game.map.collectibles == 0)
		game.can_exit = 1;
	img_path = ft_get_image(game.map.map[x][y], game.can_exit);
	if (img_path)
	{
		game.img_ptr = mlx_xpm_file_to_image(game.mlx_ptr, img_path,
				&game.img_size, &game.img_size);
		mlx_put_image_to_window(game.mlx_ptr, game.win_ptr, game.img_ptr,
			y * 32, x * 32);
		mlx_destroy_image(game.mlx_ptr, game.img_ptr);
	}
}

void	ft_render_images(t_program game)
{
	int		x;
	int		y;

	x = 0;
	game.img_size = 32;
	while (game.map.map[x])
	{
		y = 0;
		while (game.map.map[x][y] != '\n' && game.map.map[x][y])
		{
			render_images_action(game, x, y);
			y++;
		}
		x++;
	}
}