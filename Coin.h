#ifndef COIN
#define COIN
#include <iostream>
using namespace std;

class Coin
{
private:
	bool isHeads;
	const int centValue;
public:
	Coin();
	Coin(int value);
	void flip();
	const bool isItHeads();
	const string getSideUp();
	const int getStringValue();


};

#endif
