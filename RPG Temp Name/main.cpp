#include "SFML\Window.hpp"
#include "SFML\Graphics.hpp"
#include "SFML\Audio.hpp"
#include <stdio.h>
#include <iostream>
#include "Menu.h"
#include "Player.h"
#include "Seed.h"
#include "Herb.h"
#include "Sprite.h"


int main()
{
	//Creating the window for the game and putting it in borderless fullscreen.
	sf::VideoMode desktop = sf::VideoMode().getDesktopMode();
	sf::RenderWindow window(desktop, "Quest", sf::Style::None);

	
	//*****Try to find a way to put this in a class******
	//Creating the textures and sprites for the title screen
	sf::Texture titleTexture;
	sf::Sprite titleImage;

	//load the textures for the title screen and apply them to sprites.
	if (!titleTexture.loadFromFile("Graphics/TempTitleScreen.png"))
		std::cout << "error could not load player image" << std::endl;


	titleImage.setTexture(titleTexture);
	//*****************************************************

	

	//creating the main menu object & making it visible when the game starts
	Menu mainMenu(0,0);
	mainMenu.setVisibility(true);

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
		// clear the window with no color
		window.clear();

		if (mainMenu.visibility() == true)
		{
			window.draw(titleImage);
		}
		// draw everything here...
		// window.draw(...);

		// end the current frame
		window.display();
	}

	return 0;
}
