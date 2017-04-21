#include "AttackTypeManager.h"



AttackTypeManager::AttackTypeManager()
{
	initTypes();
}


AttackTypeManager::~AttackTypeManager()
{
}


void AttackTypeManager::initTypes()
{
	typeListMap.insert(std::make_pair(e_ATKTYPE_BASIC, new Attack_basic));
	typeListMap.insert(std::make_pair(e_ATKTYPE_HEAVY, new Attack_heavy));
}