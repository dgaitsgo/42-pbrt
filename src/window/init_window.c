#include "window.h"

void			init_window(t_window *window)
{
	SDL_WIDTH = SDL_WIDTH ? SDL_WIDTH : DEFAULT_WINDOW_WIDTH;
	SDL_HEIGHT = SDL_HEIGHT ? SDL_HEIGHT : DEFAULT_WINDOW_HEIGHT;
	SDL_DEPTH = 32;
	SDL_BPL = SDL_WIDTH * (SDL_DEPTH / 8);
	SDL_Init(SDL_INIT_VIDEO);
	SDL_WINDOW = SDL_CreateWindow("ray tracing", 100, 200,
	SDL_WIDTH, SDL_HEIGHT, 0);
	SDL_SCREEN = SDL_GetWindowSurface(SDL_WINDOW);
	SDL_FRAME_BUFFER = malloc(SDL_WIDTH * SDL_HEIGHT * 4);
	SDL_IMAGE = SDL_CreateRGBSurfaceFrom(SDL_FRAME_BUFFER,
	SDL_WIDTH, SDL_HEIGHT, SDL_DEPTH, SDL_BPL, 0, 0, 0, 0);
	window->z_buffer = malloc(sizeof(double) * SDL_WIDTH * SDL_HEIGHT);
	window->aspect_ratio = (double)SDL_WIDTH / (double)SDL_HEIGHT;
	window->inverse_aspect_ratio = (double)SDL_HEIGHT / (double)SDL_WIDTH;
}
