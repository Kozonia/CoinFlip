#include "Coin.h"
#include <iostream>
#include "time.h"
#include "Game.h"
using namespace std;


int main()
{
	srand(time(0));
	bool error = false;

	do {
		int mode;
		cout << "What gamemode do you want to play? (Enter '1' for normal mode or '2' for custom mode)" << endl;
		cin >> mode;

		if (mode == 1)
		{
			Game Game;
			Game.playGame();
			error = false;
		}
		else if (mode == 2)
		{
			double tempBal;
			cout << "What is your target goal? " << endl;
			cin >> tempBal;
			Game Game(tempBal);
			Game.playGame();
			error = false;
			

		}
		else
		{
			error = true;
		}

	} while (error == true);

	
	
	/*
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
	*/

	return 0;
}