/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   screen_space.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/07 18:16:32 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/05 19:11:21 by dgaitsgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ray_trace.h"

void	screen_space(t_matrix m, double width, double height)
{
	m[0][0] = width / 2;
	m[0][1] = 0;
	m[0][2] = 0;
	m[0][3] = width / 2 - 0.5;
	m[1][0] = 0;
	m[1][1] = -height / 2;
	m[1][2] = 0;
	m[1][3] = height / 2 - 0.5;
	m[2][0] = 0;
	m[2][1] = 0;
	m[2][2] = 1;
	m[2][3] = 0;
	m[3][0] = 0;
	m[3][1] = 0;
	m[3][2] = 0;
	m[3][3] = 1;
}
