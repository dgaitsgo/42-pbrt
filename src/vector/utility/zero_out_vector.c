#include "vector.h"

void				zero_out_vectors(t_vector **v, int max)
{
	int i;

	i = 0;
	while (i < max)
	{
		set_vector(v[i], 0, 0, 0);
		i++;
	}
}
