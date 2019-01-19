#include "vector.c"

t_vector	new_point(double x, double y, double z, double w)
{
	t_vector n;

	n.x = x;
	n.y = y;
	n.z = z;
	n.w = 1;
	return (n);
}

