#include "vector.h"

t_vector	unit_vector(t_vector a)
{
	return (vector_scale(a, 1 / vector_length(a)));
}
