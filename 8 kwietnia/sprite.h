#pragma once
#include "Komponenty.h"
#include "SDL.h"

class Sprite : public Component
{
private:
	transformComponent* transform;
	SDL_Texture* texture;

	SDL_Rect srcRect, destRect;
public:
	Sprite() = default;
	Sprite(const char* path)
	{
		setTex(path);

	}
	void setTex(const char* path)
	{
		texture = menagerTestur::LoadTexture(path);
	}
	void init() override
	{
		transform = &entity->getComponent<transformComponent>();
		srcRect.x = srcRect.y = 0;
		srcRect.w = srcRect.h = 32;
		destRect.w = destRect.h = 32;
	}
	void update() override
	{
		destRect.x = (int)transform->position.x;
		destRect.y = (int)transform->position.y;
	}
	void draw() override
	{
		menagerTestur::Draw(texture, srcRect, destRect);
	}

};