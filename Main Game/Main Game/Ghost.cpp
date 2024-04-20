#include "Ghost.h"

Ghost::Ghost()
{
}

Ghost::~Ghost()
{
}


Pinky::Pinky()
{
	this->initGhost();
}
Pinky::~Pinky()
{
}
void Pinky::DisplayPinky(sf::RenderWindow& window)
{
	window.draw(Ghost_c);
	window.draw(Ghost_r);
}
bool Pinky::useDoor(char Map[][26], bool& isDoorUsed)
{
	return false;
}
void Pinky::Calculate_index(sf::Vector2f& Ghost_Position, int& Ghost_index_i, int& Ghost_index_j)
{
	if ((Ghost_c.getPosition().x - Ghost_Position.x) == 30)
	{
		Ghost_Position.x = Ghost_c.getPosition().x;
		Ghost_index_j++;
	}
	else if ((Ghost_c.getPosition().x - Ghost_Position.x) == -30)
	{
		Ghost_Position.x = Ghost_c.getPosition().x;
		Ghost_index_j--;
	}

	if ((Ghost_c.getPosition().y - Ghost_Position.y) == 30)
	{
		Ghost_Position.y = Ghost_c.getPosition().y;
		Ghost_index_i++;
	}
	else if ((Ghost_c.getPosition().y - Ghost_Position.y) == -30)
	{
		Ghost_Position.y = Ghost_c.getPosition().y;
		Ghost_index_i--;
	}
}
void Pinky::Scatter(bool& isDoorUsed, char Map[][26])
{
}
void Pinky::initGhost()
{
	Ghost_Pos.x = 360.f;
	Ghost_Pos.y = 390.f;
	Ghost_index_i = 13;
	Ghost_index_j = 12;
	Ghost_c.setRadius(15.f);
	Ghost_c.setPosition(Ghost_Pos.x, Ghost_Pos.y);
	Ghost_r.setSize(sf::Vector2f(30.f, 20.f));
	Ghost_r.setPosition(360.f, 400.f);
	Ghost_c.setFillColor(sf::Color(255, 192, 203));
	Ghost_r.setFillColor(sf::Color(255, 192, 203));

}

Blinky::Blinky()
{
	this->initGhost();
}
Blinky::~Blinky()
{
}
void Blinky::DisplayBlinky(sf::RenderWindow& window)
{
	window.draw(Ghost_c);
	window.draw(Ghost_r);
}
bool Blinky::useDoor(char Map[][26], bool& isDoorUsed)
{
	return false;
}
void Blinky::Calculate_index(sf::Vector2f& Ghost_Position, int& Ghost_index_i, int& Ghost_index_j)
{
	if ((Ghost_c.getPosition().x - Ghost_Position.x) == 30)
	{
		Ghost_Position.x = Ghost_c.getPosition().x;
		Ghost_index_j++;
	}
	else if ((Ghost_c.getPosition().x - Ghost_Position.x) == -30)
	{
		Ghost_Position.x = Ghost_c.getPosition().x;
		Ghost_index_j--;
	}

	if ((Ghost_c.getPosition().y - Ghost_Position.y) == 30)
	{
		Ghost_Position.y = Ghost_c.getPosition().y;
		Ghost_index_i++;
	}
	else if ((Ghost_c.getPosition().y - Ghost_Position.y) == -30)
	{
		Ghost_Position.y = Ghost_c.getPosition().y;
		Ghost_index_i--;
	}
}
void Blinky::Scatter(bool& isDoorUsed, char Map[][26])
{
}
void Blinky::initGhost()
{
	Ghost_Pos.x = 390.f;
	Ghost_Pos.y = 390.f;
	Ghost_index_i = 13;
	Ghost_index_j = 13;
	Ghost_c.setRadius(15.f);
	Ghost_c.setPosition(Ghost_Pos.x, Ghost_Pos.y);
	Ghost_r.setSize(sf::Vector2f(30.f, 20.f));
	Ghost_r.setPosition(390.f, 400.f);
	Ghost_c.setFillColor(sf::Color(255, 0, 0));
	Ghost_r.setFillColor(sf::Color(255, 0, 0));
}

Inky::Inky()
{
	this->initGhost();
}
Inky::~Inky()
{
}
void Inky::DisplayInky(sf::RenderWindow& window)
{
	window.draw(Ghost_c);
	window.draw(Ghost_r);
}
bool Inky::useDoor(char Map[][26], bool& isDoorUsed)
{
	return false;
}
void Inky::Calculate_index(sf::Vector2f& Ghost_Position, int& Ghost_index_i, int& Ghost_index_j)
{
	if ((Ghost_c.getPosition().x - Ghost_Position.x) == 30)
	{
		Ghost_Position.x = Ghost_c.getPosition().x;
		Ghost_index_j++;
	}
	else if ((Ghost_c.getPosition().x - Ghost_Position.x) == -30)
	{
		Ghost_Position.x = Ghost_c.getPosition().x;
		Ghost_index_j--;
	}

	if ((Ghost_c.getPosition().y - Ghost_Position.y) == 30)
	{
		Ghost_Position.y = Ghost_c.getPosition().y;
		Ghost_index_i++;
	}
	else if ((Ghost_c.getPosition().y - Ghost_Position.y) == -30)
	{
		Ghost_Position.y = Ghost_c.getPosition().y;
		Ghost_index_i--;
	}
}
void Inky::Scatter(bool& isDoorUsed, char Map[][26])
{
}
void Inky::initGhost()
{
	Ghost_Pos.x = 420.f;
	Ghost_Pos.y = 390.f;
	Ghost_index_i = 13;
	Ghost_index_j = 14;
	Ghost_c.setRadius(15.f);
	Ghost_c.setPosition(Ghost_Pos.x, Ghost_Pos.y);
	Ghost_r.setSize(sf::Vector2f(30.f, 20.f));
	Ghost_r.setPosition(420.f, 400.f);
	Ghost_c.setFillColor(sf::Color::Blue);
	Ghost_r.setFillColor(sf::Color::Blue);
}

Clyde::Clyde()
{
	this->initGhost();
}
Clyde::~Clyde()
{
}
void Clyde::DisplayClyde(sf::RenderWindow& window)
{
	window.draw(Ghost_c);
	window.draw(Ghost_r);
}
void Clyde::Calculate_index(sf::Vector2f& Ghost_Position, int& Ghost_index_i, int& Ghost_index_j)
{
	//std::cout << "................\n";
	if ((Ghost_c.getPosition().x - Ghost_Position.x) >= 30)
	{
		Ghost_Position.x = Ghost_c.getPosition().x;
		Ghost_index_j++;
	}
	else if ((Ghost_c.getPosition().x - Ghost_Position.x) <= -30)
	{
		Ghost_Position.x = Ghost_c.getPosition().x;
		Ghost_index_j--;
	}

	if ((Ghost_c.getPosition().y - Ghost_Position.y) >= 30)
	{
		Ghost_Position.y = Ghost_c.getPosition().y;
		Ghost_index_i++;
	}
	else if ((Ghost_c.getPosition().y - Ghost_Position.y) <= -30)
	{
		Ghost_Position.y = Ghost_c.getPosition().y;
		Ghost_index_i--;
	}
}
void Clyde::Scatter(bool& isDoorUsed, char Map[][26])
{
	Calculate_index(Ghost_Pos, Ghost_index_i, Ghost_index_j);
	if (isDoorUsed && Frame_rate == 100)
	{
		//int Direction = rand() % 4;			
		//
		//if (Direction == 0)		// Left Move
		//{
		//	if (Map[Ghost_index_i][Ghost_index_j -1] == '#')
		//	{
		//		x = 0.f;
		//		y = 0.f;
		//		Direction = rand() % 4;
		//	}
		//	else
		//	{
		//		x = -0.3f;
		//		y = 0.f;
		//	}
		//}
		//else if (Direction == 1)		// Right Move
		//{
		//	if (Map[Ghost_index_i][Ghost_index_j + 1] == '#')
		//	{
		//		x = 0.f;
		//		y = 0.f;
		//		Direction = rand() % 4;
		//	}
		//	else
		//	{
		//		x = 0.3f;
		//		y = 0.f;
		//	}
		//}
		//else if (Direction == 2)		// Up Move
		//{
		//	if (Map[Ghost_index_i - 1][Ghost_index_j] == '#')
		//	{
		//		x = 0.f;
		//		y = 0.f;
		//		Direction = rand() % 4;
		//	}
		//	else
		//	{
		//		x = 0.f;
		//		y = -0.3f;
		//	}
		//}
		//else if (Direction == 3)		// Down Move
		//{
		//	if (Map[Ghost_index_i + 1][Ghost_index_j] == '#')
		//	{
		//		x = 0.f;
		//		y = 0.f;
		//		Direction = rand() % 4;
		//	}
		//	else
		//	{
		//		x = 0.f;
		//		y = 0.3f;
		//	}
		//}
		//Ghost_c.setPosition(Ghost_c.getPosition().x + x, Ghost_c.getPosition().y + y);
		//Ghost_r.setPosition(Ghost_r.getPosition().x + x, Ghost_r.getPosition().y + y);

		bool selectDir[4] = { false };
		if (Map[Ghost_index_i][Ghost_index_j - 1] == '.' || Map[Ghost_index_i][Ghost_index_j - 1] == ' ' || Map[Ghost_index_i][Ghost_index_j - 1] == 'o')
		{
			selectDir[0] = true;		// Left
		}
		if (Map[Ghost_index_i][Ghost_index_j + 1] == '.' || Map[Ghost_index_i][Ghost_index_j + 1] == ' ' || Map[Ghost_index_i][Ghost_index_j + 1] == 'o')
		{
			selectDir[1] = true;		// Right
		}
		if (Map[Ghost_index_i - 1][Ghost_index_j] == '.' || Map[Ghost_index_i - 1][Ghost_index_j] == ' ' || Map[Ghost_index_i - 1][Ghost_index_j] == 'o')
		{
			selectDir[2] = true;		// UP
		}
		if (Map[Ghost_index_i + 1][Ghost_index_j] == '.' || Map[Ghost_index_i + 1][Ghost_index_j] == ' ' || Map[Ghost_index_i + 1][Ghost_index_j] == 'o')
		{
			selectDir[3] = true;		// Down
		}

		int Index_of_Dir_arr = rand() % 4;
		while (selectDir[Index_of_Dir_arr] == false)
			Index_of_Dir_arr = rand() % 4;
		// 0-left, 1-right, 2-up, 3-down
		if (Index_of_Dir_arr == 0)
		{
			x = -0.3f; y = 0.f;
		}
		else if (Index_of_Dir_arr == 1)
		{
			x = 0.3f; y = 0.f;
		}
		else if (Index_of_Dir_arr == 2)
		{
			x = 0.f; y = -0.3f;
		}
		else if (Index_of_Dir_arr == 3)
		{
			x = 0.f; y = 0.3f;
		}
		Frame_rate--;

		if (Frame_rate == 0)
			Frame_rate = 100;

		Ghost_c.setPosition(Ghost_c.getPosition().x + x, Ghost_c.getPosition().y + y);
		Ghost_r.setPosition(Ghost_r.getPosition().x + x, Ghost_r.getPosition().y + y);

		for (int i = 0; i < 4; i++)
		{
			selectDir[i] = false;
		}
	}
}
bool Clyde::useDoor(char Map[][26], bool& isDoorUsed)
{
	Calculate_index(Ghost_Pos, Ghost_index_i, Ghost_index_j);		// Calculating indexes according to the Map
	if (isDoorUsed == false)
	{
		x = 0.f;
		y = -0.4f;
		if (Map[Ghost_index_i - 1][Ghost_index_j] != '#')
		{
			Ghost_c.setPosition(Ghost_c.getPosition().x + x, Ghost_c.getPosition().y + y);
			Ghost_r.setPosition(Ghost_r.getPosition().x + x, Ghost_r.getPosition().y + y);
			isDoorUsed = false;
		}
		else
			isDoorUsed = true;
	}
	return isDoorUsed;
}
void Clyde::initGhost()
{
	Frame_rate = 100;
	Ghost_Pos.x = 390.f;
	Ghost_Pos.y = 360.f;
	Ghost_index_i = 12;
	Ghost_index_j = 13;
	Ghost_c.setRadius(15.f);
	Ghost_c.setPosition(Ghost_Pos.x, Ghost_Pos.y);
	Ghost_r.setSize(sf::Vector2f(30.f, 20.f));
	Ghost_r.setPosition(390.f, 370.f);
	Ghost_c.setFillColor(sf::Color(255, 165, 0));
	Ghost_r.setFillColor(sf::Color(255, 165, 0));
}
