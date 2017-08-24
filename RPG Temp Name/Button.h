#pragma once
class Button
{
	int xPosition;
	int yPosition;
public:
	void isPressed();
	Button(int x, int y);
	~Button();
};
Button::Button(int x, int y)
{
	xPosition = x;
	yPosition = y;
}
Button::~Button()
{
}
void Button::isPressed()
{

}