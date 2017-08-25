#include "SFML\Window.hpp"
#include "SFML\Graphics.hpp"
#include "SFML\Audio.hpp"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "Menu.h"
#include "Player.h"
#include "Seed.h"
#include "Herb.h"
#include "Sprite.h"

//Creating the window for the game and putting it in borderless fullscreen.
sf::VideoMode desktop = sf::VideoMode().getDesktopMode();
sf::RenderWindow window(desktop, "Quest", sf::Style::None);

int main()
{
	void MainMenu();
	MainMenu();
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
			{
				window.close();
				exit(0);
			}
		}

	
		

		// clear the window with no color
		window.clear();

		
		// draw everything here...
		// window.draw(...);

		// end the current frame
		window.display();
	}

	return 0;
}
void MainMenu()
{
	//****Trying to figure out a better way to do this****
	Menu mainMenu(0, 0);
	mainMenu.initialize("Graphics/TempTitleScreen.png");
	mainMenu.setVisibility(true);

	Sprite titleBlock(600, 50);
	titleBlock.setVisibility(true);
	titleBlock.initialize("Graphics/TempTitleBlock.png");

	Sprite playGameButton(700, 450);
	playGameButton.setVisibility(true);
	playGameButton.initialize("Graphics/TempPlayGame.png");

	Sprite optionsButton(700, 600);
	optionsButton.setVisibility(true);
	optionsButton.initialize("Graphics/TempOptionsButton.png");

	Sprite quitGameButton(700, 750);
	quitGameButton.setVisibility(true);
	quitGameButton.initialize("Graphics/TempQuitGame.png");
	//****											   ****

	sf::Event event;

	while (mainMenu.visibility() == true)
	{
		if (window.isOpen())
		{
			
			while (window.pollEvent(event))
			{
				if (event.type == sf::Event::Closed)
				{
					window.close();
					exit(0);
				}
				else if (titleBlock.visibility() == true)
				{
					if (event.key.code == sf::Keyboard::Numpad1 || event.key.code == sf::Keyboard::Num1)
					{
						mainMenu.setVisibility(false);
					}
					else if (event.key.code == sf::Keyboard::Numpad2 || event.key.code == sf::Keyboard::Num2)
					{
						titleBlock.setVisibility(false);
						playGameButton.setVisibility(false);
						optionsButton.setVisibility(false);
						quitGameButton.setVisibility(false);
					}
					else if (event.key.code == sf::Keyboard::Numpad3 || event.key.code == sf::Keyboard::Num3)
					{
						window.close();
						exit(0);
					}
				}
			}


			window.clear();

			window.draw(mainMenu.sprite);

			if (titleBlock.visibility() == true)
				window.draw(titleBlock.sprite);
			if (playGameButton.visibility() == true)
				window.draw(playGameButton.sprite);
			if (optionsButton.visibility() == true)
				window.draw(optionsButton.sprite);
			if (quitGameButton.visibility() == true)
				window.draw(quitGameButton.sprite);

			window.display();
		}
	}
}