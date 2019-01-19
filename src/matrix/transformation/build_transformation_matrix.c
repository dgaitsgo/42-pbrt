/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transformation_matrix.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/07 18:16:32 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/05 19:14:34 by dgaitsgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ray_trace.h"


void		build_transformation_matrix(t_matrix transform, t_transform t)
{
	t_matrix	scale;
	t_matrix	rotation;
	t_matrix	translation;

	build_scale_matrix(scale, t.scale.x, t.scale.y, t.scale.z);
	build_rotation_matrix(rotation, t.rotation.x, t.rotation.y, t.rotation.z);
	build_translation_matrix(translation, t.translation.x,
	t.translation.y, t.translation.z);
	compose_matrices(transform, scale, rotation, translation);
}
