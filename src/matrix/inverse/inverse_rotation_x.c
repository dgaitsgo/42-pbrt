#include "matrix.h"

void		inverse_rotation_x(t_matrix rx, double x)
{
	rx[0][0] = 1;
	rx[0][1] = 0;
	rx[0][2] = 0;
	rx[0][3] = 0;
	rx[1][0] = 0;
	rx[1][1] = (double)cos(x);
	rx[1][2] = (double)sin(x);
	rx[1][3] = 0;
	rx[2][0] = 0;
	rx[2][1] = -(double)sin(x);
	rx[2][2] = (double)cos(x);
	rx[2][3] = 0;
	rx[3][0] = 0;
	rx[3][1] = 0;
	rx[3][2] = 0;
	rx[3][3] = 1;
}
