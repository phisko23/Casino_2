// Casino.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
class Spiele
{
public:
    Spiele();
    ~Spiele();
private:
};
Spiele::Spiele()
{
}
Spiele::~Spiele()
{
}
class Roulette : public Spiele
{
public:
    Roulette();
    ~Roulette();
private:
};
Roulette::Roulette()
{
}
Roulette::~Roulette()
{
}
class Slotmachine : public Spiele
{
public:
    Slotmachine();
    ~Slotmachine();
private:
};
Slotmachine::Slotmachine()
{
}
Slotmachine::~Slotmachine()
{
}
class BlackJack : public Spiele
{
public:
    BlackJack();
    ~BlackJack();
private:
};
BlackJack::BlackJack()
{
}
BlackJack::~BlackJack()
{
}
class Spieler
{
public:
    Spieler();
    ~Spieler();
private:
};
Spieler::Spieler()
{
}
Spieler::~Spieler()
{

}
int main()
{

}