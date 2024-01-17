#pragma once
#include "Actor.h"

class MoveComponent;

class Character :
    public Actor
{
public:
    Character(float x, float y, const char* name);

    float getMoveSpeed() { return m_moveSpeed; }
    void setMoveSpeed(float speed) { m_moveSpeed = speed; }

    MoveComponent* getMoveComponent() { return m_moveComponent; }

private:
    float m_moveSpeed = 1;
    MoveComponent* m_moveComponent;
};

