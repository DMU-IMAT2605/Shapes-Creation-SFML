/*!
\file Quad.h
*//*! \class Quad
\A base class which allows construction of a 4 4 sided shape with parallel sides (Square/Rectangle), this is also used to construct a thin line.
*/

#pragma once
#include "SFML/Graphics.hpp"
class Quad : public sf::Drawable
{

private:
	int posX;  //!<Variable to hold the upper left x coordinate of the shape
	int posY; //!<Variable to hold the upper left y coordinate of the shape
	int width; //!<Variable used to hold the width of the shape
	int height; //!<Variable used to hold the height of the shape
	sf::VertexArray pointArr; //!<Array to hold position values of vertices


public:

	Quad();
	Quad(int xIn, int yIn, int wIn, int hIn); //!<Constructor for Quad class
	~Quad();
	void makeQuad(); //!<Function to assign position values to the vertices
	void draw(sf::RenderTarget& target, sf::RenderStates states) const; //!<function to draw shape to window
};

