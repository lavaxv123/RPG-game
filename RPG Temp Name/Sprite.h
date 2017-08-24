#pragma once
class Sprite
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
	Sprite(int x, int y);
	~Sprite();
};
Sprite::Sprite(int x, int y)
{
	xPosition = x;
	yPosition = y;
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
void Sprite::initialize()
{

}