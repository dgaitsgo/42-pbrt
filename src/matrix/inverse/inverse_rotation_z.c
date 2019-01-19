#include "matrix.h"

void		inverse_rotation_z(t_matrix rz, double z)
{
	rz[0][0] = (double)cos(z);
	rz[0][1] = (double)sin(z);
	rz[0][2] = 0;
	rz[0][3] = 0;
	rz[1][0] = -(double)sin(z);
	rz[1][1] = (double)cos(z);
	rz[1][2] = 0;
	rz[1][3] = 0;
	rz[2][0] = 0;
	rz[2][1] = 0;
	rz[2][2] = 1;
	rz[2][3] = 0;
	rz[3][0] = 0;
	rz[3][1] = 0;
	rz[3][2] = 0;
	rz[3][3] = 1;
}
