#include "gra.h"
#define SDL_MAIN_HANDLED
gra* Gra = nullptr;

int main(int argc, char** argv)
{
	const int FPS = 60;
	const int frameDelay = 1000 / FPS;
	Uint32 framestart;
	int frametime;
	Gra = new gra();
	Gra->init("silnik", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 640, false);
		
	while(Gra->running())
	{
		framestart = SDL_GetTicks();

		Gra->handleevent();
		Gra->update();
		Gra->render();
		frametime = SDL_GetTicks() - framestart;
		if (frameDelay > frametime)
		{
			SDL_Delay(frameDelay - frametime);

		}
	}

	Gra->clear();


	return 0;
}