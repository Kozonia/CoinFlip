#include "Coin.h"
#include <iostream>
using namespace std;


Coin::Coin() : centValue(1)
{
	isHeads = false;
	
}

Coin::Coin(int value) centValue(value)
{
	isHeads = false;
}
void flip();
const bool isItHeads();
const string getSideUp();
const int getStringValue();