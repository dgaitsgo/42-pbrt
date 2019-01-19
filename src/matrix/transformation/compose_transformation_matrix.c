
void		compose_transformation_matrix(t_matrix transform, t_matrix scale,
t_matrix rotation, t_matrix translation)
{
	t_matrix	res;

	matrix_multiply(res, rotation, scale);
	matrix_multiply(transform, translation, res);
}

