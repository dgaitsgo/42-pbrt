#include "vector.h"

int			compare_vector(t_vector a, t_vector b)
{
	double	a_len;
	double	b_len;

	a_len = vector_length(a);
	b_len = vector_length(b);
	if (a_len == b_len)
		return (0);
	else if (a_len < b_len)
		return (-1);
	else
		return (1);
}

