#pragma once
#include "Card Types/CardTypeEnums.hpp"
#include <string>

class Card
{
public:
	Card();
	virtual ~Card();

	CardType	GetFlags() const;
	std::string GetName() const;
	bool		IsFaceUp() const;

private:
	CardType	typeFlags;
	std::string	name;
	bool		faceUp;
};