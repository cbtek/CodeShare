#include <iostream>

int main(int argc, char ** argv)
{
	

	int imageW = 1024;
	int imageH = 768;

	int divW = 500;
	int divH = 500;

	float ratioW = (float)imageW / (float)imageH;
	float ratioH = (float)imageH / (float)imageW;

	//if you already know either divW or divH then just multiply the ratio
	//by the correct imageW and imageH

	int newW = divW * (float)ratioW;
	int newH = divH * (float)ratioH;
	
	//The following lines are just printing out results
	std::cout << "Image W: " << imageW << std::endl;
	std::cout << "Image H: " << imageH << std::endl;
	std::cout << "Div W: " << divW << std::endl;
	std::cout << "Div H: " << divH << std::endl;

	std::cout << std::endl;
	std::cout << "New W: " << newW << std::endl;
	std::cout << "New H: " << newH << std::endl;

	return 0;
}
