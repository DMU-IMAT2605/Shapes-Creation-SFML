/*! \file main.cpp
* \brief Main file for the application
*
* Contains the entry point of the application and the establishment of the class objects. These are then drawn onto the window in order to display them.
*/

/*! \mainpage Lab 2 - Shapes
* A simple program which has the intended purpose to display a set of different shapes (circle, arc, ellipse, square, rectangle, triangle, line and a dot), 
* onto a window for the user to see, the shapes are customisable by changing the paramaters that are inputted into the constructors of the class objects.
*/


#include "SFML/Graphics.hpp"
#include "Circle.h"
#include "Quad.h"
#include "Triangle.h"
#include "Ellipse.h"
#include "Arc.h"


int main() //!< Entry point for the application
{
	sf::RenderWindow window(sf::VideoMode(1024, 800), "Lab Book 1 - Shapes");
	window.setFramerateLimit(60);

	Circle circle(200, 200, 200, 60);
	Quad square(450, 150, 100, 100);
	Quad rectangle(450, 400, 100, 150);
	Circle dot(50, 700, 3, 100);
	Quad line(150, 700, 300, 1);
	Triangle triangle(600, 600, 200);
	Ellipse ellipse(850, 300, 150, 60);
	Arc arc(200, 600, 100, 60);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}

		window.clear();
		
		window.draw(circle);
		window.draw(square);
		window.draw(rectangle);
		window.draw(dot);
		window.draw(line);
		window.draw(triangle);
		window.draw(ellipse);
		window.draw(arc);

		window.display();
	}
}
