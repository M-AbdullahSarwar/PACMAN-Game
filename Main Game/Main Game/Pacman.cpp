#include "Pacman.h"
#include<iostream>
using namespace std;

Pacman::Pacman()
{
	this->initPacman();
}
Pacman::~Pacman()
{
}
void Pacman::DisplayPacman(sf::RenderWindow& window)
{
	window.draw(this->Player);
}
void Pacman::initPacman()
{
	this->Player_Position.x = 390.f;
	this->Player_Position.y = 720.f;
	this->Player_index_i = 24;
	this->Player_index_j = 13;
	this->x = this->y = 0;
	this->Player.setSize(sf::Vector2f(30.f, 30.f));
	Player.setPosition(Player_Position.x, Player_Position.y);
	Player.setFillColor(sf::Color::Yellow);
	this->Player_frames = 60;
	//this->Player_texture.loadFromFile("texture.png");
	//this->Player.setTexture(Player_texture);

}
void Pacman::movePlayer(char Map[][26])
{
	Calculate_index(Player_Position, Player_index_i, Player_index_j);		// Calculating indexes of the Player *According to the Map

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A) && Move_Left(Map, Player_index_i, Player_index_j) && Player_frames == 60)		// Left_Movement and a Check :o
	{
		//this->Player.setTextureRect(sf::IntRect((int)this->Player.getPosition().x / 14 % 4 * 26, 54, 23, 27.2));
		x = -0.5f;
		y = 0;
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D) && Move_Right(Map, Player_index_i, Player_index_j) && Player_frames == 60)		// Right_Movement and a Check :o
	{
		//this->Player.setTextureRect(sf::IntRect((int)this->Player.getPosition().x / 14 % 4 * 24.5, 0, 23, 29));
		x = 0.5f;
		y = 0;
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W) && Move_Up(Map, Player_index_i, Player_index_j) && Player_frames == 60)		// Up_Movement and a Check :o
	{
		//this->Player.setTextureRect(sf::IntRect((int)this->Player.getPosition().y / 14 % 4 * 25, 31, 24, 26.6));
		x = 0.0f;
		y = -0.5f;
	}
	else  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S) && Move_Down(Map, Player_index_i, Player_index_j) && Player_frames == 60)		// Down_Movement and a Check :o
	{
		//this->Player.setTextureRect(sf::IntRect((int)this->Player.getPosition().y / 14 % 4 * 24.5, 78, 23, 28));
		x = 0.0f;
		y = 0.5f;
	}

	if (x == -0.5f && y == 0.f)		// Left Collision
	{
		if (Move_Left(Map, Player_index_i, Player_index_j))
		{
		}
		else
			x = y = 0.f;
	}
	else if (x == 0.5f && y == 0.f)		// Right Collision
	{
		if (Move_Right(Map, Player_index_i, Player_index_j))
		{
		}
		else
			x = y = 0.f;
	}
	else if (x == 0.f && y == -0.5f)		// Up Collision
	{
		if (Move_Up(Map, Player_index_i, Player_index_j))
		{
		}
		else
			x = y = 0.f;
	}
	else if (x == 0.f && y == 0.5f)		// Down Collision
	{
		if (Move_Down(Map, Player_index_i, Player_index_j))
		{
		}
		else
			x = y = 0.f;
	}

	ErasePellets(Map, Player_index_i, Player_index_j);


	this->Player.setPosition(Player.getPosition().x + x, Player.getPosition().y + y);		// Moving the Player :)
	if (x != 0 || y != 0)
		Player_frames--;

	if (Player_frames == 0)
		Player_frames = 60;			// resetting the Frame

}
void Pacman::Calculate_index(sf::Vector2f& Player_Position, int& Player_index_i, int& Player_index_j)
{
	if ((Player.getPosition().x - Player_Position.x) == 30)			// Moved right
	{
		Player_Position.x = Player.getPosition().x;
		Player_index_j++;
	}
	else if ((Player.getPosition().x - Player_Position.x) == -30)		// Moved Left
	{
		Player_Position.x = Player.getPosition().x;
		Player_index_j--;
	}

	if ((Player.getPosition().y - Player_Position.y) == 30)		// Moved Down
	{
		Player_Position.y = Player.getPosition().y;
		Player_index_i++;
	}
	else if ((Player.getPosition().y - Player_Position.y) == -30)		// Moved Up
	{
		Player_Position.y = Player.getPosition().y;
		Player_index_i--;
	}

}
bool Pacman::Move_Left(char Map[][26], int index_i, int index_j)
{
	if (Map[index_i][index_j - 1] == '#')
		return false;
	else
		return true;

}
bool Pacman::Move_Right(char Map[][26], int index_i, int index_j)
{
	if (Map[index_i][index_j + 1] == '#')
		return false;
	else
		return true;
}
bool Pacman::Move_Up(char Map[][26], int index_i, int index_j)
{
	if (Map[index_i - 1][index_j] == '#')
		return false;
	else
		return true;
}
bool Pacman::Move_Down(char Map[][26], int index_i, int index_j)
{
	if (Map[index_i + 1][index_j] == '#')
		return false;
	else
		return true;
}
void Pacman::ErasePellets(char Map[][26], int Player_index_i, int Player_index_j)
{
	if (Map[Player_index_i][Player_index_j] == '.')
	{
		Map[Player_index_i][Player_index_j] = ' ';
	}
}