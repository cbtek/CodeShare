#include <iostream>

static double c_Granularity = .001;

int main(int argc, char ** argv)
{
    int originalX = 800;
    int originalY = 450;
    int divW = 500;
    int divH = 500;
    float ratioW = (float)originalX / (float)originalY;
    float ratioH = (float)originalY / (float)originalX;

    //set the scale factor what you want
    float scaleFactor = 1.0;
    int newW = (ratioW * originalY) * scaleFactor;
    int newH = (ratioH * originalX) * scaleFactor;

    if (newW > newH)
    {
        while (newW > divW)
        {
            scaleFactor -= c_Granularity;
            newW = (ratioW * originalY) * scaleFactor;
            newH = (ratioH * originalX) * scaleFactor;
        }
    }
    else
    {
        while (newH > divH)
        {
            scaleFactor -= c_Granularity;
            newW = (ratioW * originalY) * scaleFactor;
            newH = (ratioH * originalX) * scaleFactor;
        }
    }

    //The following lines are just printing out results
    std::cout << "Old W: " << originalX << std::endl;
    std::cout << "Old H: " << originalY << std::endl;
    std::cout << "div W: " << divW << std::endl;
    std::cout << "div H: " << divH << std::endl;
    std::cout << std::endl;
    std::cout << "New W: " << newW << std::endl;
    std::cout << "New H: " << newH << std::endl;
    return 0;
}