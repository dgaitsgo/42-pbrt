#include "vector.h"

t_vector		vector_inverse_scale(t_vector a, double c)
{
	t_vector	res;
	double		t;

	t = 1.0 / c;
	res.x = a.x * t;
	res.y = a.y * t;
	res.z = a.z * t;
	return (res);
}
