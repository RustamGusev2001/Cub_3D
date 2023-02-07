/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcrius <kcrius@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 17:27:17 by kcrius            #+#    #+#             */
/*   Updated: 2022/10/22 17:27:19 by kcrius           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub.h"

t_data	*parse(int argc, char **argv)
{
	char	*str;
	t_data	*data;

	if (argc != 2)
		put_error(INVALID_ARG_COUNT, ERR_ARG);
	str = read_file(argv[1]);
	data = convert_line_to_data(str);
	free(str);
	return (data);
}
