#include "matrix.h"

void	identity_matrix(t_matrix m)
{
	int			i;
	int			j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			m[i][j] = i == j ? 1 : 0;
			j++;
		}
		i++;
	}
}

