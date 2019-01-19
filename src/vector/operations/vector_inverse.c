#include "vector.h"

t_vector	vector_inverse(t_vector a)
{
	t_vector	inv;

	inv.x = 1 / a.x;
	inv.y = 1 / a.y;
	inv.z = 1 / a.z;
	return (inv);
}
