#include <iostream>

int main(int argc, char ** argv)
{
	
	int originalX = 800;
	int originalY = 450;

	float ratioX = (float)originalX / (float)originalY;
	float ratioY = (float)originalY / (float)originalX;

	//set the scale factor what you want
	float scaleFactor = 1.0;
	
	int newX = (ratioX * originalY) * scaleFactor;
	int newY = (ratioY * originalX) * scaleFactor;

	//The following lines are just printing out results
	std::cout << "Old X: " << originalX << std::endl;
	std::cout << "Old Y: " << originalY << std::endl;
	std::cout << std::endl;
	std::cout << "New X: " << newX << std::endl;
	std::cout << "New Y: " << newY << std::endl;
	return 0;
}
