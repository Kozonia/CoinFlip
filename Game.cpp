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
	

}

void Game::flipCoins()
{
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

void Game::playGame()
{

	cout << "Welcome! You have 3 coins to flip (nickel, dime, and quarter) and your goal is to reach " << targetBalance
		<< " in the shortest ammount of rounds. Good Luck!" << endl;
	flipCoins();
}
