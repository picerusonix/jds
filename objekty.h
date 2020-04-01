#pragma once
#include "gra.h"
class objekty
{
public:
	objekty(const char* texturesheet, int x, int y);
	~objekty();
	void Update();
	void Render();

private:

	int xpos;
	int ypos;
	SDL_Texture* objTexture;
	SDL_Rect srcRect, destRect;







};

