/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_data.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcrius <kcrius@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 17:26:49 by kcrius            #+#    #+#             */
/*   Updated: 2022/10/22 17:26:50 by kcrius           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub.h"

t_data	*create_data(void)
{
	t_data	*data;

	data = (t_data *) malloc(sizeof (t_data));
	if (data == NULL)
		put_error(INVALID_MEMORY, ERR_MEMORY);
	data->path_north = NULL;
	data->path_south = NULL;
	data->path_west = NULL;
	data->path_east = NULL;
	data->floor = NULL;
	data->ceilling = NULL;
	return (data);
}
