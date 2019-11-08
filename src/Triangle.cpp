#include "Triangle.h"



/*!
\file Triangle.cpp
*/
Triangle::Triangle()
{
}

//! Function to construct the class
/*!
\param xIn - the x input for the position
\param yIn - the y input for the position
\param lIn - the value used to determine the side length
*/
Triangle::Triangle(int xIn, int yIn, int lIn) {
	posX = xIn;
	posY = yIn;
	sideLength = lIn;
	pointArr.setPrimitiveType(sf::LineStrip);
	pointArr.resize(4);
	makeTriangle();
}

//! Function to define the vertices
/*!
\each position value is calculated using the side length from the origin point of the corner
*/
void Triangle::makeTriangle() {
	pointArr[0].position = sf::Vector2f(posX, posY);
	pointArr[1].position = sf::Vector2f(posX + sideLength, posY);
	pointArr[2].position = sf::Vector2f(posX, posY + sideLength);
	pointArr[3].position = sf::Vector2f(posX, posY);
}

void Triangle::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(pointArr);
}

Triangle::~Triangle()
{
}
