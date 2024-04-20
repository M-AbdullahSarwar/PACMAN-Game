#include<SFML/Graphics.hpp>

class Pacman
{
public:
	Pacman();
	~Pacman();

	void DisplayPacman(sf::RenderWindow&);
	void movePlayer(char Map[][26]);
	void Calculate_index(sf::Vector2f&, int& Player_index_i, int& Player_index_j);
	bool Move_Left(char Map[][26], int index_i, int index_j);
	bool Move_Right(char Map[][26], int index_i, int index_j);
	bool Move_Up(char Map[][26], int index_i, int index_j);
	bool Move_Down(char Map[][26], int index_i, int index_j);
	void ErasePellets(char Map[][26], int Player_index_i, int Player_index_j);

private:

	/*sf::Sprite Player;
	sf::Texture Player_texture;*/
	sf::RectangleShape Player;

	int Player_index_i, Player_index_j;
	//float Player_x, Player_y;
	sf::Vector2f Player_Position;
	float x, y;		// speed variables
	int Player_frames;			// frame per iteration

	void initPacman();
};