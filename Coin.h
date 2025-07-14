#ifndef COIN
#define COIN
#include<iostream>
#include<string>

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
    const std::string getSideUp();
    const int getCentValue();

};

#endif
