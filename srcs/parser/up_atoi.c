/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   up_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcrius <kcrius@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 17:27:38 by kcrius            #+#    #+#             */
/*   Updated: 2022/10/22 17:27:39 by kcrius           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub.h"

int	up_atoi(const char *str)
{
	int	num;

	while (*str == SPACE)
		++str;
	if (ft_isdigit(*str) == FALSE)
		return (-1);
	num = 0;
	while (ft_isdigit(*str) == TRUE)
		num = num * 10 + (*(str++) - '0');
	while (*str == SPACE)
		++str;
	if (*str != END_OF_LINE && *str != COMMA && *str != NEW_LINE)
		put_error(INVALID_COLOR_CHANNELS, ERR_COLOR_CHANNELS);
	return (num);
}
