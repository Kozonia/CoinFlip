#include "Game.h"
#include <iostream>
using namespace std;


Game::Game()
{
	numberOfCoins = 3;
	coins = new Coin[numberOfCoins]{ Coin(5),Coin(10),Coin(25) };
	targetBalance = 100;
	totalScore = 0;
	roundsPlayed = 0;

}

Game::Game(double target)
{
	numberOfCoins = 3;
	coins = new Coin[numberOfCoins]{ Coin(5),Coin(10),Coin(25) };
	targetBalance = target;
	totalScore = 0;
	roundsPlayed = 0;
}

Game::~Game()
{
	delete coins;
}

void Game::printFlipResults()
{
	
	cout << "Nickel: " << coins[0].getSideUp() << endl;
	cout << "Dime: " << coins[1].getSideUp() << endl;
	cout << "Quarter: " << coins[2].getSideUp() << endl << endl;

}

void Game::flipCoins()
{
	cout << "Flip #" << getRounds() + 1 << endl;
	for (int i = 0; i < numberOfCoins; i++)
	{
		coins[i].flip();
	}
}

int Game::getRounds()
{
	return roundsPlayed;
}

int Game::getScore()
{
	return totalScore;
}

void Game::printScore()
{
	cout << totalScore << endl;
}

void Game::playGame()
{
	int play;
	cout << "Welcome! You have 3 coins to flip (nickel, dime, and quarter) and your goal is to reach " << targetBalance
		<< " in the shortest ammount of rounds. Good Luck!" << endl << endl;
	
	do {
		cout << "Enter 1 to flip." << endl;
		cin >> play;
		if (play != 1)
		{
			cout << "Try again" << endl;
		}
		cout << endl;

		flipCoins();
		printFlipResults();
		roundsPlayed++;

		for (int i = 0; i < numberOfCoins; i++)
		{
			if (coins[i].isItHeads())
			{
				totalScore += coins[i].getCentValue();
			}
		}

	} while (totalScore < targetBalance);

	cout << "Good Game!" << endl
		<< "Score: ";
	printScore();
	cout << "Number of Rounds: " << roundsPlayed << endl;
}
