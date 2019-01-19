#include "vector.h"

t_vector		vector_const_add(t_vector a, double b)
{
	t_vector res;

	res.x = a.x + b;
	res.y = a.y + b;
	res.z = a.z + b;
	return (res);
}
