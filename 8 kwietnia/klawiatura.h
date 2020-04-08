#pragma once
#pragma once

#include "gra.h"
#include "Entity.h"
#include "Komponenty.h"

class kalwaitura : public Component
{
public:
	transformComponent* transform;
	void init() override
	{
		transform = &entity->getComponent<transformComponent>();

	}
	void update() override
	{
		if (gra::event.type == SDL_KEYDOWN)
		{
			switch (gra::event.key.keysym.sym)
			{
			case SDLK_w:
				transform->velocity.y = -1;
				break;
			case SDLK_s:
				transform->velocity.y = 1;
				break;
			case SDLK_a:
				transform->velocity.x = -1;
				break;
			case SDLK_d:
				transform->velocity.x = 1;
				break;
			default:
				break;
			}
		}
		if (gra::event.type == SDL_KEYUP)
		{
			switch (gra::event.key.keysym.sym)
			{
			case SDLK_w:
				transform->velocity.y = 0;
				break;
			case SDLK_s:
				transform->velocity.y = 0;
				break;
			case SDLK_a:
				transform->velocity.x = 0;
				break;
			case SDLK_d:
				transform->velocity.x = 0;
				break;
			default:
				break;
			}
		}
	}
};