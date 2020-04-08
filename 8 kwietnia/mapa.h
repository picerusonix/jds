#pragma once
#include "gra.h"
class mapa
{
public:
	mapa();
	~mapa();
	void loadMap(int arr[20][25]);
	void drawMap();


private:

	SDL_Rect src, dest;
	SDL_Texture* podloga1;
	SDL_Texture* podloga2;
	SDL_Texture* podloga3;
	SDL_Texture* podloga4;
	SDL_Texture* wall;

	int map[20][25];
};

