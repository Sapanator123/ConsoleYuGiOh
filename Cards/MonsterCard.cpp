#include "MonsterCard.hpp"

MonsterCard::~MonsterCard()
{
}

short MonsterCard::GetAttack() const
{
	return attack;
}

short MonsterCard::GetDefence() const
{
	return defence;
}

short MonsterCard::GetLevel() const
{
	return level;
}

MonsterType MonsterCard::GetType() const
{
	return type;
}

MonsterAttribute MonsterCard::GetAttribute() const
{
	return attribute;
}

bool MonsterCard::IsAttackMode() const
{
	return attackMode;
}
