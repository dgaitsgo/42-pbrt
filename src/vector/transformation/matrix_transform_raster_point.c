#include "vector.h"
#include "matrix.h"

t_vector		matrix_transform_raster_point(t_vector *pnt, t_matrix m)
{
	t_vector	inv;

	inv.x =
	pnt->x * m[0][0] + pnt->y * m[0][1] + pnt->z * m[0][2] + pnt->w * m[0][3];
	inv.y =
	pnt->x * m[1][0] + pnt->y * m[1][1] + pnt->z * m[1][2] + pnt->w * m[1][3];
	inv.z =
	pnt->x * m[2][0] + pnt->y * m[2][1] + pnt->z * m[2][2] + pnt->w * m[2][3];
	inv.w =
	pnt->x * m[3][0] + pnt->y * m[3][1] + pnt->z * m[3][2] + pnt->w * m[3][3];
	return (inv);
}
