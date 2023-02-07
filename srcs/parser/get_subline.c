/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_subline.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcrius <kcrius@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 17:27:07 by kcrius            #+#    #+#             */
/*   Updated: 2022/10/22 17:27:10 by kcrius           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub.h"

char	*get_subline(const char *line)
{
	int		i;
	char	*subline;

	while (*line == SPACE)
		++line;
	if (*line == END_OF_LINE)
		put_error(INVALID_LINE, ERR_LINE);
	i = 0;
	while (line[i] != END_OF_LINE && line[i] != NEW_LINE)
		++i;
	subline = ft_substr(line, 0, i);
	if (subline == NULL)
		put_error(INVALID_MEMORY, ERR_MEMORY);
	return (subline);
}
