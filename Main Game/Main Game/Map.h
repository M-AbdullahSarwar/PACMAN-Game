//#include<iostream>
#include<SFML/Graphics.hpp>
#include<string>
#include"Global.h"

using namespace std;

class Map
{
public:
	Map();
	~Map();
	void DisplayMap(sf::RenderWindow& window, char Map_copy[][GridNo_of_Cols]);
	void getMap_Sketch(char Map_copy[][GridNo_of_Cols], int& once);

private:
	sf::RectangleShape Grid_box;
	sf::CircleShape Pellets;
	sf::CircleShape Powerup_Pellets;
	string* Map_Sketch;

	void initMap();
};

