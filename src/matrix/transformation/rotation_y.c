#include "matrix.h"

void		rotation_y(t_matrix ry, double y)
{
	ry[0][0] = (double)cos(y);
	ry[0][1] = 0;
	ry[0][2] = (double)sin(y);
	ry[0][3] = 0;
	ry[1][0] = 0;
	ry[1][1] = 1;
	ry[1][2] = 0;
	ry[1][3] = 0;
	ry[2][0] = -(double)sin(y);
	ry[2][1] = 0;
	ry[2][2] = (double)cos(y);
	ry[2][3] = 0;
	ry[3][0] = 0;
	ry[3][1] = 0;
	ry[3][2] = 0;
	ry[3][3] = 1;
}
