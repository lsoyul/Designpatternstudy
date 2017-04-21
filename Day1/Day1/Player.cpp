#include "Player.h"
#include "AttackTypeManager.h"

Player::Player()
{
}


Player::~Player()
{
}

void Player::setAttackType(E_AttackType type)
{
	attackBehavior = attackTypeManager->getAttackType(type);
}