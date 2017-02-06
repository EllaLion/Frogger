#include <SFML/Graphics.hpp>
#include <iostream>
#include <SFML/Window.hpp>

using namespace std;

int main()
{
	sf::Window window(sf::VideoMode(800,600),"Frogger");

	while(window.isOpen())
	{
		sf::Event event;
		while(window.pollEvent(event))
		{
			if(event.type == sf::Event::Closed)
			{
				window.close();
			}

			if(event.type == sf::Event::KeyPressed)
			{
				if(event.key.code == sf::Keyboard::W) cout << "User pressed the W key" << endl; //move frog.h x,y position
				if(event.key.code == sf::Keyboard::A) cout << "User pressed the A key" << endl;
				if(event.key.code == sf::Keyboard::D) cout << "User pressed the D key" << endl;
				if(event.key.code == sf::Keyboard::S) cout << "User pressed the S key" << endl;
			}
		}
	}

	return 0;

}