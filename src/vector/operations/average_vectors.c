#include "vector.h"

t_vector			average_vectors(t_vector **v, int max)
{
	int			i;
	t_vector	res;

	i = 0;
	set_vector(&res, 0, 0, 0);
	while (i < max)
	{
		res = vector_add(*v[i], res);
		i++;
	}
	res = vector_const_divide(res, max);
	return (res);
}
