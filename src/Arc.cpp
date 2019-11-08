#include "Arc.h"

/*!
\file Arc.cpp
*/

Arc::Arc()
{
}

//! Function to construct the class
/*!
\param xIn - the x input for the position
\param yIn - the y input for the position
\param rIn - the input for the radius of the shape
\param nIn - the input for the number of vertices of the shape
*/
Arc::Arc(int xIn, int yIn, int rIn, int nIn) {
	xPos = xIn;
	yPos = yIn;
	radius = rIn;
	n = nIn;
	pointArr.setPrimitiveType(sf::LineStrip);
	pointArr.resize(n);
	makeArc();
}

//! Function to define the vertices
/*!
\angle/angleIncrement - used to calculate where the next position value will be in order to form a circle
\uses the absolute value of the calculated y coordinate in order to limit the position values to form an arc
*/
void Arc::makeArc() {
	int angle = 0;
	int angleIncrement = 360 / n;
	for (int i = 0; i < n; i++) {
		pointArr[i].position = sf::Vector2f((xPos + std::cos(angle)*radius), (yPos - abs(std::sin(angle)*radius)));
		angle += angleIncrement;
	}
}


Arc::~Arc()
{
}
