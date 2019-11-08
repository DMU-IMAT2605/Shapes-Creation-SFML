/*!
\file Circle.cpp
*/


#include "Circle.h"

Circle::Circle()
{
}

//! Function to construct the class
/*!
\param xIn - the x input for the position
\param yIn - the y input for the position
\param rIn - the input for the radius of the circle
\param nIn - the input for the number of vertices of the shape
*/
Circle::Circle(int xIn, int yIn, int rIn, int nIn) {
	xPos = xIn;
	yPos = yIn;
	radius = rIn;
	n = nIn;
	pointArr.setPrimitiveType(sf::LineStrip);
	pointArr.resize(n);
	makeCircle();
}

//! Function to define the vertices
/*!
\angle/angleIncrement - used to calculate where the next position value will be in order to form a circle
*/
void Circle::makeCircle() {
	int angle = 0;
	int angleIncrement = 360 / n;
	for (int i = 0; i < n; i++) {
		pointArr[i].position = sf::Vector2f((xPos + std::cos(angle)*radius), (yPos + std::sin(angle)*radius));
		angle += angleIncrement;
	}
}

void Circle::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(pointArr);
}


Circle::~Circle()
{
}
