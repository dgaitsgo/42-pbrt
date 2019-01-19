/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   object_matrix_build.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgaitsgo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 20:22:56 by dgaitsgo          #+#    #+#             */
/*   Updated: 2017/03/05 19:16:51 by dgaitsgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ray_trace.h"


void		build_affine_group(t_affine_group *ag)
{
	build_transformation_matrix(ag->transformation, ag->trans_data);
	build_inverse_transformation_matrix(ag->inverse, ag->trans_data);
	build_normal_to_world(ag->inverse_scale_times_rotation, ag->trans_data);
}
