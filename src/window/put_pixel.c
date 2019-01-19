#include "window.h"
#include "vector.h"

void			put_pixel(t_window *window,
				t_vector pos, t_vector color, int depth_test)
{
	int i;
	int	zindex;

	zindex = (int)pos.y + window->width + (int)pos.x;
	i = ((int)pos.x * SDL_DEPTH >> 3) + (int)pos.y * SDL_BPL;
	if (pos.x < 0 || pos.x >= window->width ||
		pos.y < 0 || pos.y >= window->height)
		return ;
	if (color.x < 0 || color.x > 255)
		return ;
	if (color.y < 0 || color.y > 255)
		return ;
	if (color.z < 0 || color.z > 255)
		return ;
	SDL_FRAME_BUFFER[i] = color.z;
	SDL_FRAME_BUFFER[i + 1] = color.y;
	SDL_FRAME_BUFFER[i + 2] = color.x;
	SDL_FRAME_BUFFER[i + 3] = 1;
	window->z_buffer[(int)pos.y + window->width + (int)pos.x] = pos.z;
}
