#ifndef gra_h
#define gra_h
#include "SDL.h"
#include "SDL_image.h"
#include <iostream>
#define SDL_MAIN_HANDLED
class gra {
public:
	gra();
	~gra();


	void init(const char* title, int xpos, int ypos, int szer, int wysoko, bool pelenekran);

	void update();
	void render();
	void clear();
	void handleevent();
	bool running() { return dziala; }
	
	static SDL_Renderer* renderer;

private:
	int licznik;
	bool dziala;
	SDL_Window* window;
	



};



#endif
