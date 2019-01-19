#include "vector.h"

t_vector		vector_divide(t_vector a, t_vector b)
{
	t_vector	res;

	res.x = a.x / b.x;
	res.y = a.y / b.y;
	res.z = a.z / b.z;
	return (res);
}
