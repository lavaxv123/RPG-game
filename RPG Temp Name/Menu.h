#pragma once
class Menu
{
	bool isVisible = false;
	int xPosition = 0;
	int yPosition = 0;
	

public:
	sf::Texture texture;
	sf::Sprite sprite;
	void setVisibility(bool visible);
	void initialize(std::string fileName);
	bool visibility();
	Menu(int x, int y);
	~Menu();
};

Menu::Menu(int x, int y)
{
	xPosition = x;
	yPosition = y;
}
Menu::~Menu()
{
}
void Menu::setVisibility(bool visible)
{
	isVisible = visible;
}
bool Menu::visibility()
{
	return isVisible;
}

//code for initializing and loading the sprite for the menu
void Menu::initialize(std::string fileName)
{
	if (!texture.loadFromFile(fileName))
		std::cout << "error could not load player image" << std::endl;
	sprite.setTexture(texture);
}
