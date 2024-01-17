#include "Character.h"
#include "MoveComponent.h"

Character::Character(float x, float y, const char* name) : Actor(x, y, name)
{
	//TODO: The move component constructor should be updated to include an argument for an owner.
	//The move component should inherit from component.

	m_moveComponent = new MoveComponent();
	//addComponent(m_moveComponent);
}
