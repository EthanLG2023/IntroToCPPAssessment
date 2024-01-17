#pragma once
#include "Component.h"

class MoveComponent
{
public:
	float velocity;

	void update(float deltaTime);
};

