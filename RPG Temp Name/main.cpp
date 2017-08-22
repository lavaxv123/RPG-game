#include "SFML\Window.hpp"
#include "SFML\Graphics.hpp"
#include "SFML\Audio.hpp"
#include <stdio.h>
#include <iostream>
#include "Menu.h"
#include "Player.h"
#include "Seed.h"
#include "Herb.h"

int main()
{
	//Creating the window for the game and putting it in borderless fullscreen.
	sf::VideoMode desktop = sf::VideoMode().getDesktopMode();
	sf::RenderWindow window(desktop, "Temp Name", sf::Style::None);


	//Main loop that is running while the game is going
	while (window.isOpen())
	{
		// Check all the window's events that were triggered since the last iteration of the loop
		// This loop is where all the code involving keypresses will be located.
		sf::Event event;
		while (window.pollEvent(event))
		{
			// "close requested" event: we close the window
			if (event.type == sf::Event::Closed)
				window.close();
		}

	}

	return 0;
}
