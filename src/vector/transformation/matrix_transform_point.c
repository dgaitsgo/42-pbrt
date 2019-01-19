#include "vector.h"
#include "matrix.h"

t_vector		matrix_transform_point(t_vector *pnt, t_matrix m)
{
	t_vector	inv;

	inv.x = pnt->x * m[0][0] + pnt->y * m[0][1] + pnt->z * m[0][2] + m[0][3];
	inv.y = pnt->x * m[1][0] + pnt->y * m[1][1] + pnt->z * m[1][2] + m[1][3];
	inv.z = pnt->x * m[2][0] + pnt->y * m[2][1] + pnt->z * m[2][2] + m[2][3];
	inv.w = 1;
	return (inv);
}
