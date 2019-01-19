#include "vector.h"

double		vector_length(t_vector a)
{
	return (sqrt(dot_product(a, a)));
}
