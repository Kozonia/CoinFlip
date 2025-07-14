#ifndef GAMELOGIC
#define GAMELOGIC
#include <iostream>
#include "Coin.h"
using namespace std;

class Game
{
private:
	Coin* coins;
	int numberOfCoins;
	double targetBalance;
	int totalScore;
	int roundsPlayed;
	void printFlipResults();
	void flipCoins();
public:
	Game();
	Game(double target);
	~Game();
	void playGame();
	void printScore();
	int getRounds();
	int getScore();

};

#endif

