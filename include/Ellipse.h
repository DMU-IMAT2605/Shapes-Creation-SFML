/*!
\file Ellipse.h
*//*! \class Ellipse
\A class derived from Circle which allows the construction of an Ellipse.
*/

#pragma once
#include "Circle.h"
class Ellipse :
	public Circle
{
public:
	Ellipse();
	Ellipse(int xIn, int yIn, int rIn, int nIn); //!<Constructor for Ellipse
	~Ellipse();
	void makeEllipse(); //!<Function used to assign the position value to each vertex
};

