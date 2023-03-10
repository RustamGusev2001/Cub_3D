/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation_check.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcrius <kcrius@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 17:27:45 by kcrius            #+#    #+#             */
/*   Updated: 2022/10/22 17:27:46 by kcrius           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub.h"

void	validation_check_path(char *path)
{
	int	fd;

	fd = open(path, O_RDONLY);
	if (fd == -1)
		put_error_and_arg(path, INVALID_FILE, ERR_FILE);
	if (close(fd) == -1)
		put_error(INVALID_CLOSE, ERR_CLOSE);
}

void	validation_check_color(t_color *color)
{
	if (color->b < 0 || color->b > 255 || color->g < 0
		|| color->g > 255 || color->r < 0 || color->r > 255)
		put_error(INVALID_COLOR, ERR_COLOR);
}
