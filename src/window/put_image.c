#include	"scene.h"	
void			put_image(t_scene *scene)
{
	t_window	*window;

	window = &scene->window;
	SDL_BlitSurface(SDL_IMAGE, NULL, SDL_SCREEN, NULL);
	SDL_UpdateWindowSurface(SDL_WINDOW);
	poll_events(scene);
}
