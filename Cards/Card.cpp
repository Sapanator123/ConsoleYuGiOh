#include "Card.hpp"

Card::Card()
{
}

Card::~Card()
{
}

CardType Card::GetFlags() const
{
	return typeFlags;
}

std::string Card::GetName() const
{
	return name;
}

bool Card::IsFaceUp() const
{
	return faceUp;
}
