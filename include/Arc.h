/*!
\file Arc.h
*//*! \class Arc
\A class derived from Circle which allows the construction of an Arc.
*/

#pragma once
#include "Circle.h"
class Arc :
	public Circle
{
public:
	Arc();
	Arc(int xIn, int yIn, int rIn, int nIn); //!<Constructor for Arc class
	~Arc();
	void makeArc(); //!<Function used to assign the position values to the vertices
};

