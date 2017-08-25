#pragma once
class Sprite
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
	Sprite(int x, int y);
	~Sprite();
};
Sprite::Sprite(int x, int y)
{
	xPosition = x;
	yPosition = y;
	sprite.setPosition(sf::Vector2f(xPosition, yPosition));
	
}
Sprite::~Sprite()
{
}
void Sprite::setVisibility(bool visible)
{
	isVisible = visible;
}
bool Sprite::visibility()
{
	return isVisible;
}
void Sprite::initialize(std::string fileName)
{
	if (!texture.loadFromFile(fileName))
		std::cout << "error could not load player image" << std::endl;
	sprite.setTexture(texture);
	
}