#pragma once
#include "AttackBehavior.h"
#include "EnumTypes.h"

class AttackTypeManager;	// Declare empty for link later. (전방선언)

class Player
{
private:
	AttackBehavior* attackBehavior;
	AttackTypeManager* attackTypeManager;

public:
	Player();
	~Player();

	void Attack() { attackBehavior->attack(); }
	void setAttackType(E_AttackType type);


	void LinkAttackTypeManager(AttackTypeManager* atm) { attackTypeManager = atm; }
};

