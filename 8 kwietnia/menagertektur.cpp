#include "menagertektur.h"

SDL_Texture* menagerTestur::LoadTexture(const char* texture)
{
	SDL_Surface* tempSurface = IMG_Load(texture);
	SDL_Texture* tex = SDL_CreateTextureFromSurface(gra::renderer, tempSurface);
	SDL_FreeSurface(tempSurface);

	return tex;
}

void menagerTestur::Draw(SDL_Texture* tex, SDL_Rect src, SDL_Rect dest)
{
	SDL_RenderCopy(gra::renderer, tex, &src, &dest);
}
