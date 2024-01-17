#include <iostream>
#include <Vector2.h>
#include "raylib.h"
#include "Input.h"

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


	MathLibrary::Vector2 direction = MathLibrary::Vector2(0,0);

	if (IsKeyPressed(KEY_D))
	{
		
	}
	if (IsKeyPressed(KEY_A))
	{

		direction = direction + MathLibrary::Vector2(-1, 0);
	}
	if (IsKeyPressed(KEY_W))
	{

	}
	if (IsKeyPressed(KEY_S))
	{

	}

	


}
