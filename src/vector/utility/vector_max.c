#include "vector.h"

t_vector	vector_max(t_vector a, t_vector b)
{
	t_vector	max;

	max.x = MAX(a.x, b.x);
	max.y = MAX(a.y, b.y);
	max.z = MAX(a.z, b.z);
	max.w = MAX(a.w, b.w);
	return (max);
}

