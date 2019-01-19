#include "vector.h"

t_vector	new_vector(double x, double y, double z)
{
	t_vector n;

	n.x = x;
	n.y = y;
	n.z = z;
	n.w = 0;
	return (n);
}

