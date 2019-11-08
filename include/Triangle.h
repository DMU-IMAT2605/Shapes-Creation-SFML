/*!
\file Triangle.h
*//*! \class Triangle
\A base class which allows construction of a Right-Angled Triangle.
*/
#pragma once
#include "SFML/Graphics.hpp"
class Triangle : public sf::Drawable
{

private:
	int posX; //!<Variable used to hold the x position of the right-angled corner
	int posY; //!<Variable used to hold the y position of the right-angled corner
	int sideLength;  //!<Used to hold the length of each side connected to the right-angled corner
	sf::VertexArray pointArr;  //!<array used to hold the position values of the vertices


public:

	Triangle();
	Triangle(int xIn, int yIn, int lIn);  //!<Constructor for triangle class
	~Triangle();
	void makeTriangle();  //!<Function used to assign position values to each vertex
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;  //!<Function used to draw the class object
};