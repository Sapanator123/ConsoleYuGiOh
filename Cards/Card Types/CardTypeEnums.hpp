#pragma once
#include <stdbool.h>

enum CardType
{
	None = 0,
	Normal = 1,
	Effect = 1 << 1,
	Flip = 1 << 2,
	Fusion = 1 << 3,
	Gemini = 1 << 4,
	Ritual = 1 << 5,
	Tuner = 1 << 6,
	Syncro = 1 << 7,
	Xyz = 1 << 8,
	Pendulum = 1 << 9,
	Token = 1 << 10,
	Toon = 1 << 11,
	Union = 1 << 12,
	Spirit = 1 << 13,
	Link = 1 << 14,
	Monster = 1 << 15,
	Spell = 1 << 16,
	Trap = 1 << 17,
	Continuous = 1 << 18,
	Equip = 1 << 19,
	QuickPlay = 1 << 20,
	Field = 1 << 21,
	Counter = 1 << 22
};

enum MonsterType
{
	None,
	Wind,
	Earth,
	Water,
	Fire,
	Dark,
	Light,
	Divine
};

enum MonsterAttribute
{
	None,
	Aqua,
	Beast,
	BeastWarrior,
	CreatorGod,
	Cyberse,
	Dinosaur,
	DivineBeast,
	Dragon,
	Fairy,
	Fiend,
	Fish,
	Insect,
	Machine,
	Plant,
	Psychic,
	Pyro,
	Reptile,
	Rock,
	SeaSerpent,
	Spellcaster,
	Thunder,
	Warrior,
	WingedBeast,
	Wyrm,
	Zombie
};

static inline bool IsNormal(CardType type)
{
	return (type & Normal) != CardType::None;
}

static inline bool IsMonster(CardType type)
{
	return (type & Monster) != CardType::None;
}

static inline bool IsSpell(CardType type)
{
	return (type & Spell) != CardType::None;
}

static inline bool IsTrap(CardType type)
{
	return (type & Trap) != CardType::None;
}

static inline bool IsEffectMonster(CardType type)
{
	CardType t = (Monster | Effect);
	return (type & t) == t;
}

static inline bool IsFusionMonster(CardType type)
{
	CardType t = (Monster | Fusion);
	return (type & t) == t;
}

static inline bool IsSyncroMonster(CardType type)
{
	CardType t = (Monster | Syncro);
	return (type & t) == t;
}

static inline bool IsXyzMonster(CardType type)
{
	CardType t = (Monster | Xyz);
	return (type & t) == t;
}

static inline bool IsPendulumMonster(CardType type)
{
	CardType t = (Monster | Pendulum);
	return (type & t) == t;
}

static inline bool IsLinkMonster(CardType type)
{
	CardType t = (Monster | Link);
	return (type & t) == t;
}