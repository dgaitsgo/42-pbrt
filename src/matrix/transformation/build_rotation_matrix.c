/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation_matrix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/07 18:16:32 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/05 19:10:19 by dgaitsgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ray_trace.h"



void		build_rotation_matrix(t_matrix rotation,
double x, double y, double z)
{
	t_matrix	rx;
	t_matrix	ry;
	t_matrix	rz;
	t_matrix	res;

	rotate_x(rx, degrees_to_radians(x));
	rotate_y(ry, degrees_to_radians(y));
	rotate_z(rz, degrees_to_radians(z));
	matrix_multiply(res, ry, rx);
	matrix_multiply(rotation, rz, res);
}
