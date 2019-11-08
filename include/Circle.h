/*!
\file Circle.h
*/

/*! \class Circle
\The base class used to construct a circle using a vertex array, this class is also used to constuct a small dot.
*/


#pragma once
#include "SFML/Graphics.hpp"
class Circle : public sf::Drawable
{

public:

	int xPos; //!<Used to contain the central x coordinate of the circle
	int yPos; //!<Used to contain the central y coordinate of the circle
	int radius; //!<Used to hold the radius of the circle (distance from center to edge)
	int n; //!<Used to hold the number of Vertices that the circle will have
	sf::VertexArray pointArr; //!<Used to hold the positions of the different Vertices
	Circle();
	Circle(int xIn, int yIn, int rIn, int n); //!<Constructor Class for circle
	~Circle();
	void makeCircle(); //!<Function used to calculate the location of each vertex of the circle
	void draw(sf::RenderTarget& target, sf::RenderStates states) const; //!<Function used to draw the circle onto the screen
};