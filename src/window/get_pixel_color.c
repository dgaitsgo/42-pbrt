#include "vector.h"
#include "window.h"

t_vector		get_pixel_color(t_window *window, char *img, int x, int y)
{
	t_vector	color;
	int			i;

	i = (x * SDL_DEPTH >> 3) + y * SDL_BPL;
	color.x = img[i];
	color.y = img[i + 1];
	color.z = img[i + 2];
	color.w = img[i + 3];
	rgb_to_normal(&color);
	return (color);
}

