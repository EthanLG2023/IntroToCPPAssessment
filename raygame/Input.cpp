#include <iostream>
#include <Vector2.h>
#include "raylib.h"
#include "Input.h"
#include "Actor.h"


char Input::getInput()
{
	char keyChar = std::cin.get();
	return keyChar; ;
}

void Input::start()
{
}

void Input::draw()
{
}

void Input::update(float deltaTime)
{
	Actor::update(deltaTime);

	MathLibrary::Vector2 direction = MathLibrary::Vector2(0,0);

	if (IsKeyPressed(KEY_D) || IsKeyPressed(KEY_RIGHT))
	{
		direction = direction + MathLibrary::Vector2(1, 0);
	}
	if (IsKeyPressed(KEY_A) || IsKeyPressed(KEY_LEFT))
	{
		direction = direction + MathLibrary::Vector2(-1, 0);
	}
	if (IsKeyPressed(KEY_W) || IsKeyPressed(KEY_UP))
	{
		direction = direction + MathLibrary::Vector2(0, -1);
	}
	if (IsKeyPressed(KEY_S) || IsKeyPressed(KEY_DOWN))
	{
		direction = direction + MathLibrary::Vector2(0, 1);
	}

	
	

}
