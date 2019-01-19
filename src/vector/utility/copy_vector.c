#include "vector.h"

void		copy_vector(t_vector *dst, t_vector *src)
{
	dst->x = src->x;
	dst->y = src->y;
	dst->z = src->z;
}
