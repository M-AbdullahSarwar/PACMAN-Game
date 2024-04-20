#include "Map.h"

//	Map Class Functions
void Map::initMap()
{
	this->Map_Sketch = new string[GridNo_of_Rows]{

		"                           ",
		"  #######################  ",
		"  #..........#..........#  ",
		"  #o####.###.#.###.####o#  ",
		"  #.....................#  ",
		"  #######.#######.#######  ",
		"  #.....................#  ",
		"  #o#####.#######.#####o#  ",
		"  #.....#.#######.#.....#  ",
		"  #####.#....#....#.#####  ",
		"      #.####.#.####.#      ",
		"      #.............#      ",
		"####### #####4##### #######",
		"        ####123####        ",
		"####### ########### #######",
		"      # #.........# #      ",
		"      # #.#######.# #      ",
		"  ##### #.#######.# #####  ",
		"  #..........#..........#  ",
		"  #.###.####.#.####.###.#  ",
		"  #o..#.............#..o#  ",
		"  ###.#.#.#######.#.#.###  ",
		"  #.....#....#....#.....#  ",
		"  #o########.#.########o#  ",
		"  #..........P..........#  ",
		"  #######################  ",
	};

	this->Grid_box.setSize(sf::Vector2f(Cell_size, Cell_size));
	this->Pellets.setRadius(2.f);
	this->Powerup_Pellets.setRadius(6.f);
	this->Pellets.setFillColor(sf::Color::Magenta);
	this->Powerup_Pellets.setFillColor(sf::Color::Cyan);
	this->Grid_box.setFillColor(sf::Color::Blue);
}
void Map::DisplayMap(sf::RenderWindow& window, char Map_copy[][GridNo_of_Cols])
{
	for (int i = 0; i < GridNo_of_Rows; i++)
	{
		for (int j = 0; j < GridNo_of_Cols; j++)
		{
			if (Map_copy[i][j] == '#')
			{
				window.draw(Grid_box);
				this->Grid_box.setPosition(Grid_box.getPosition().x + 30, Grid_box.getPosition().y);
				this->Pellets.setPosition(Pellets.getPosition().x + 30, Pellets.getPosition().y);
				this->Powerup_Pellets.setPosition(Powerup_Pellets.getPosition().x + 30, Powerup_Pellets.getPosition().y);
			}
			else if (Map_copy[i][j] == '.')
			{
				window.draw(Pellets);
				this->Grid_box.setPosition(Grid_box.getPosition().x + 30, Grid_box.getPosition().y);
				this->Pellets.setPosition(Pellets.getPosition().x + 30, Pellets.getPosition().y);
				this->Powerup_Pellets.setPosition(Powerup_Pellets.getPosition().x + 30, Powerup_Pellets.getPosition().y);
			}
			else if (Map_copy[i][j] == 'o')
			{
				window.draw(Powerup_Pellets);
				this->Grid_box.setPosition(Grid_box.getPosition().x + 30, Grid_box.getPosition().y);
				this->Pellets.setPosition(Pellets.getPosition().x + 30, Pellets.getPosition().y);
				this->Powerup_Pellets.setPosition(Powerup_Pellets.getPosition().x + 30, Powerup_Pellets.getPosition().y);
			}
			else
			{
				this->Grid_box.setPosition(Grid_box.getPosition().x + 30, Grid_box.getPosition().y);
				this->Pellets.setPosition(Pellets.getPosition().x + 30, Pellets.getPosition().y);
				this->Powerup_Pellets.setPosition(Powerup_Pellets.getPosition().x + 30, Powerup_Pellets.getPosition().y);
			}
		}
		this->Grid_box.setPosition(0, Grid_box.getPosition().y + 30);
		this->Pellets.setPosition(12, Grid_box.getPosition().y + 12);
		this->Powerup_Pellets.setPosition(8, Grid_box.getPosition().y + 10);
	}
}
void Map::getMap_Sketch(char Map_copy[][GridNo_of_Cols], int& once)
{
	if (once == 0)
	{
		for (int i = 0; i < GridNo_of_Rows; i++)
		{
			for (int j = 0; j < GridNo_of_Cols; j++)
			{
				Map_copy[i][j] = Map_Sketch[i][j];
			}
		}
	}
	once++;
}
Map::Map()
{
	this->initMap();
}
Map::~Map()
{
	delete[]Map_Sketch;		// Deleting the pointer to prevent Memory leakage
}