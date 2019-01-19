/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_transformations.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/07 18:16:32 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/07 16:10:02 by dgaitsgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ray_trace.h"



t_vector		matrix_transform_direction(t_vector *dir, t_matrix m)
{
	t_vector	inv;

	inv.x = dir->x * m[0][0] + dir->y * m[0][1] + dir->z * m[0][2];
	inv.y = dir->x * m[1][0] + dir->y * m[1][1] + dir->z * m[1][2];
	inv.z = dir->x * m[2][0] + dir->y * m[2][1] + dir->z * m[2][2];
	inv.w = 0;
	return (inv);
}
