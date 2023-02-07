/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcrius <kcrius@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 17:27:52 by kcrius            #+#    #+#             */
/*   Updated: 2022/10/22 17:27:54 by kcrius           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub.h"

int	main(int argc, char **argv)
{
	t_data	*data;
	t_game	*game;

	data = parse(argc, argv);
	game = init_game(data);
	mlx_loop_hook(game->mlx_ptr, recasting, game);
	mlx_hook(game->win_ptr, 2, 0, key_manager, game);
	mlx_hook(game->win_ptr, 17, 0, exit_ok, NULL);
	mlx_loop(game->mlx_ptr);
	return (0);
}
