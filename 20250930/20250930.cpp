#include <iostream>

using namespace std;

int Map[10][10] = {


};

class Engine
{
public:
	World MyWorld;

	void Run()
	{
		while (true)
		{
			Input();
			Tick();
			Render();
		}

	}
	void Input()
	{

	}

	void Tick()
	{

	}

	void Render()
	{

	}
};

class World
{
public:
	Player MyPlayer;
	Monster MyMonster;
	Wall MyWall[100];
	Floor MyFloor[100];
	Goal MyGoal;

	void GameOver()
	{

	}
};

class Wall
{
public:

};

class Floor
{
public:

};

class Player
{
public:
	void Move()
	{

	}
};

class Monster
{
public:
	void Move()
	{

	}

};

class Goal
{
public:

};

int main()
{
	//init()
	Engine* MyEngine = new Engine();
	//(*MyEngine).Run();
	MyEngine->Run();
	delete MyEngine;
	MyEngine = nullptr;

	return 0;
}