#include "vector.h"

t_vector		vector_scale(t_vector a, double c)
{
	t_vector res;

	res.x = a.x * c;
	res.y = a.y * c;
	res.z = a.z * c;
	return (res);
}
