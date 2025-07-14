#include "Coin.h"
#include <iostream>
using namespace std;



Coin::Coin() : centValue(1)
{
	isHeads = true;
}

Coin::Coin(int value) : centValue(value)
{
	isHeads = true;
}

void Coin::flip()
{
	isHeads = rand() % 2;
}

const bool Coin::isItHeads()
{
	return isHeads;
}

const string Coin::getSideUp()
{
	if (isHeads)
	{
		return "Heads";
	}

	else
	{
		return "Tails";
	}
}

const int Coin::getCentValue()
{
	return centValue;
}