#include "Coin.h"
#include <iostream>
#include "time.h"
using namespace std;


int main()
{
	srand(time(0));

	Coin Penny;
	int headsCount = 0;
	int tailsCount = 0;

	for (int i = 0; i < 20; i++)
	{
		Penny.flip();
		cout << Penny.getSideUp() << endl;

		if (Penny.isItHeads())
		{
			headsCount++;
		}
		else
		{
			tailsCount++;
		}

	}
	
	cout << "Heads: " << headsCount << endl;
	cout << "Tails: " << tailsCount << endl;

	return 0;
}