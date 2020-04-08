#pragma once
#include "Komponenty.h"
#include "vektor.h"
class transformComponent : public Component
{


public:
	vector2d position;
	vector2d velocity;
	int speed = 3;

	transformComponent()
	{
		position.x=0.0f;
		position.y=0.0f;
	}
	transformComponent(float x, float y)
	{
		position.x = x;
		position.y = y;

	}
	void init() override
	{
		velocity.x = 0;
		velocity.y = 0;
	}
	void update() override
	{
		position.x += velocity.x * speed;
		position.y += velocity.y * speed;
	}
	
	

};
