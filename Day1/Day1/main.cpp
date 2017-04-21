#include <iostream>
#include "Player.h"
#include "Attack_basic.h"
#include "Attack_heavy.h"
#include "AttackTypeManager.h"

using namespace std;

int main()
{

	Player* player1 = new Player;
	AttackTypeManager* atM = new AttackTypeManager;		// �Ŵ��� �Ҵ��� ���⼭ �ѹ���, ���߿� singleton �������� �ٲٱ�
	player1->LinkAttackTypeManager(atM);

	player1->setAttackType(e_ATKTYPE_BASIC);

	player1->Attack();

	player1->setAttackType(e_ATKTYPE_HEAVY);

	player1->Attack();

	return 0;
}