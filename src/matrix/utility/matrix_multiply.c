void	matrix_multiply(t_matrix res, t_matrix m1, t_matrix m2)
{
	int			row;
	int			col;
	int			inner;

	zero_matrix(res);
	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			inner = 0;
			while (inner < 4)
			{
				res[row][col] += m1[row][inner] * m2[inner][col];
				inner++;
			}
			col++;
		}
		row++;
	}
}
