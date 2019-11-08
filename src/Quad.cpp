/*!
\file Quad.cpp
*/

#include "Quad.h"

Quad::Quad()
{
}

//! Function to construct the class
/*!
\param xIn - the x input for the position
\param yIn - the y input for the position
\param wIn - the width input for the shape
\param hIn - the height input for the shape
*/
Quad::Quad(int xIn, int yIn, int wIn, int hIn) {
	posX = xIn;
	posY = yIn;
	width = wIn;
	height = hIn;
	pointArr.setPrimitiveType(sf::LineStrip);
	pointArr.resize(5);
	makeQuad();
}

//! Function to define the vertices
/*!
\each position value is calculated using the width/height from the origin point of the top left corner
*/
void Quad::makeQuad() {
	pointArr[0].position = sf::Vector2f(posX, posY);
	pointArr[1].position = sf::Vector2f(posX + width, posY);
	pointArr[2].position = sf::Vector2f(posX + width, posY + height);
	pointArr[3].position = sf::Vector2f(posX, posY + height);
	pointArr[4].position = sf::Vector2f(posX, posY);
}

void Quad::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(pointArr);
}


Quad::~Quad()
{
}
