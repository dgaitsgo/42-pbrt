#include "vector.h"

t_vector			vector_add_4(t_vector a, t_vector b, t_vector c, t_vector d)
{
	return (vector_add(d, vector_add(vector_add(a, b), c)));
}
