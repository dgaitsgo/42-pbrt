#include "vector.h"

t_vector	*new_vector_ptr(double x, double y, double z)
{
	t_vector	*res;

	res = malloc(sizeof(t_vector));
	res->x = x;
	res->y = y;
	res->z = z;
	return (res);
}
