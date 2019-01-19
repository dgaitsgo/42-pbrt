#include "vector.h"

t_vector			vector_add_3(t_vector a, t_vector b, t_vector c)
{
	return (vector_add(vector_add(a, b), c));
}
