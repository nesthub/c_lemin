/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lemin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlinhard <mlinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/04 01:49:54 by mlinhard          #+#    #+#             */
/*   Updated: 2016/05/24 11:28:44 by mlinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lemin.h"

int		main(void)
{
	t_data		data;

	ft_bzero(&data, sizeof(t_data));
	pRun(&data);
	sSize(&data, data.start, data.end);
	fDataBox(&data);
	return (0);
}
