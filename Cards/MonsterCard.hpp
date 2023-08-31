#pragma once
#include "Card.hpp"

class MonsterCard : public Card
{

public:
	MonsterCard() = default;
	virtual ~MonsterCard();

	short	GetAttack() const;
	short	GetDefence() const;
	short	GetLevel() const;
	MonsterType			GetType() const;
	MonsterAttribute	GetAttribute() const;
	bool	IsAttackMode() const;

private:
	short				attack;
	short				defence;
	short				level;
	MonsterType			type;
	MonsterAttribute	attribute;
	bool				attackMode;
};