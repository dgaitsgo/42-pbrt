#include "vector.h"

t_vector	vector_min(t_vector a, t_vector b)
{
	t_vector	min;

	min.x = MIN(a.x, b.x);
	min.y = MIN(a.y, b.y);
	min.z = MIN(a.z, b.z);
	min.w = MIN(a.w, b.w);
	return (min);
}
