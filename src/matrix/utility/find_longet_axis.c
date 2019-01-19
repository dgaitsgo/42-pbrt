#include "matrix.h"

int			find_longest_axis(t_matrix m)
{
	double	big;

	big = largest(largest(m[0][0], m[1][1]), m[2][2]);
	if (big == m[0][0])
		return (X_AXIS);
	else if (big == m[1][1])
		return (Y_AXIS);
	else
		return (Z_AXIS);
}
