#include"Map.h"
#include"Pacman.h"
#include"Ghost.h"

void initWindow(sf::RenderWindow& window, sf::VideoMode videomode);
void pollEvents(sf::RenderWindow& window, sf::Event& even);

int main()
{
	// INIT Game Engine
	sf::RenderWindow window;
	sf::VideoMode videomode;
	sf::Event even;

	initWindow(window, videomode);

	Pinky pinky;
	Blinky blinky;
	Inky inky;
	Clyde clyde;
	Pacman pacman;
	int once = 0;
	bool isDoorUsed = false;		// Is door used by the Ghosts right now?

	while (window.isOpen())		//	G A M E   L O O P
	{
		pollEvents(window, even);

		Map map;		// Map object
		char Map_copy[GridNo_of_Rows][GridNo_of_Cols];
		map.getMap_Sketch(Map_copy, once);
		// - clear old frame
		window.clear();

		// - render objects
		map.DisplayMap(window, Map_copy);
		pacman.DisplayPacman(window);
		clyde.DisplayClyde(window);
		inky.DisplayInky(window);
		pinky.DisplayPinky(window);
		blinky.DisplayBlinky(window);

		isDoorUsed = clyde.useDoor(Map_copy, isDoorUsed);
		clyde.Scatter(isDoorUsed, Map_copy);

		pacman.movePlayer(Map_copy);
		// - display frame in window
		window.display();
		once++;
	}

	return 0;
}

void initWindow(sf::RenderWindow& window, sf::VideoMode videomode)
{
	videomode.height = 800;
	videomode.width = 800;
	window.create(videomode, "Pac-Man", sf::Style::Close | sf::Style::Titlebar);

}
void pollEvents(sf::RenderWindow& window, sf::Event& even)
{
	while (window.pollEvent(even))
	{
		switch (even.type)
		{
		case sf::Event::Closed:
			window.close();
			break;

			/*case sf::Event::TextEntered:
				cout << (char)even.text.unicode;*/

		case::sf::Event::KeyPressed:
			if (even.key.code == sf::Keyboard::Escape)
			{
				window.close();
				break;
			}
		}

	}
}
