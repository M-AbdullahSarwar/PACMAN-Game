#include<iostream>
#include<SFML/Graphics.hpp>

class Ghost
{
public:
	Ghost();
	~Ghost();
	virtual bool useDoor(char Map[][26], bool& isDoorUsed) = 0;
	virtual void Calculate_index(sf::Vector2f& Ghost_Position, int& Ghost_index_i, int& Ghost_index_j) = 0;
	virtual void Scatter(bool& isDoorUsed, char Map[][26]) = 0;

protected:
	sf::CircleShape Ghost_c;
	sf::RectangleShape Ghost_r;

	int Ghost_index_i, Ghost_index_j;
	sf::Vector2f Ghost_Pos;
	float x, y;
	int Frame_rate;

	virtual void initGhost() = 0;
};


class Pinky : public Ghost
{
public:
	Pinky();
	~Pinky();
	void DisplayPinky(sf::RenderWindow&);
	bool useDoor(char Map[][26], bool& isDoorUsed);
	void Calculate_index(sf::Vector2f& Ghost_Position, int& Ghost_index_i, int& Ghost_index_j);
	void Scatter(bool& isDoorUsed, char Map[][26]);

private:
	void initGhost();
};

class Blinky : public Ghost
{
public:
	Blinky();
	~Blinky();
	void DisplayBlinky(sf::RenderWindow&);
	bool useDoor(char Map[][26], bool& isDoorUsed);
	void Calculate_index(sf::Vector2f& Ghost_Position, int& Ghost_index_i, int& Ghost_index_j);
	void Scatter(bool& isDoorUsed, char Map[][26]);

private:
	void initGhost();
};

class Inky : public Ghost
{
public:
	Inky();
	~Inky();
	void DisplayInky(sf::RenderWindow&);
	bool useDoor(char Map[][26], bool& isDoorUsed);
	void Calculate_index(sf::Vector2f& Ghost_Position, int& Ghost_index_i, int& Ghost_index_j);
	void Scatter(bool& isDoorUsed, char Map[][26]);

private:
	void initGhost();
};

class Clyde : public Ghost
{
public:
	Clyde();
	~Clyde();
	void DisplayClyde(sf::RenderWindow&);
	bool useDoor(char Map[][26], bool& isDoorUsed);
	void Calculate_index(sf::Vector2f& Ghost_Position, int& Ghost_index_i, int& Ghost_index_j);
	void Scatter(bool& isDoorUsed, char Map[][26]);

private:
	void initGhost();
};