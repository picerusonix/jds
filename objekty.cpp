#include "objekty.h"
#include "menagertektur.h"
objekty::objekty(const char* texturesheet, int x, int y)
{

	objTexture = menagerTestur::LoadTexture(texturesheet);
	xpos = x;
	ypos = y;

}
void objekty::Update()
{
	xpos++;
	ypos++;


	srcRect.h = 32;
	srcRect.w = 32;
	srcRect.x = 0;
	srcRect.y = 0;


	destRect.x = xpos;
	destRect.y = ypos;
	destRect.w = srcRect.w * 2;
	destRect.h = srcRect.h * 2;
}
void objekty::Render()
{
	SDL_RenderCopy(gra::renderer, objTexture, &srcRect, &destRect);

}
