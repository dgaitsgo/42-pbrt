#incldue "window.h"

void			kill_sdl(t_scene *scene, char *str, int fd)
{
	t_window	*window;

	window = &scene->window;
	SDL_FreeSurface(window->image);
	SDL_FreeSurface(window->screen);
	SDL_DestroyWindow(SDL_WINDOW);
	SDL_Quit();
	ft_putstr_fd(str, fd);
	exit(0);
}

