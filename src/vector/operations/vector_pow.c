#include "vector.h"

t_vector			vector_pow(t_vector a, double n)
{
	t_vector	res;

	res.x = pow(a.x, n);
	res.y = pow(a.y, n);
	res.z = pow(a.z, n);
	return (res);
}

