/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inverse_rotation_matrix.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/07 18:16:32 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/05 19:09:43 by dgaitsgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"


void		build_inverse_rotation_matrix(t_matrix inverse_rotation,
double x, double y, double z)
{
	t_matrix	rx;
	t_matrix	ry;
	t_matrix	rz;
	t_matrix	res;

	rotate_inverse_x(rx, degrees_to_radians(x));
	rotate_inverse_y(ry, degrees_to_radians(y));
	rotate_inverse_z(rz, degrees_to_radians(z));
	matrix_multiply(res, ry, rz);
	matrix_multiply(inverse_rotation, rx, res);
}
