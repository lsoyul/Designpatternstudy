#pragma once
#include <map>
#include "EnumTypes.h"
#include "Attack_basic.h"
#include "Attack_heavy.h"


class AttackTypeManager
{
private:
	std::map<E_AttackType, AttackBehavior*> typeListMap;

public:
	void initTypes();

	AttackTypeManager();
	~AttackTypeManager();

	AttackBehavior* getAttackType(E_AttackType e_type) { return typeListMap.find(e_type)->second; }
};

