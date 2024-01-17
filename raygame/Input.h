#pragma once
#include "Scene.h"


class Input
{
public:
	
	static char getInput();

	void start();

	void draw();

	void update(float deltaTime);
};

