#pragma once
class Menu
{
	bool isVisible = false;
	int xPosition = 0;
	int yPosition = 0;
	sf::Texture texture;
	sf::Sprite sprite;

public:
	void setVisibility(bool visible);
	void initialize();
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
//Need to figure out how to 
void Menu::initialize()
{

}