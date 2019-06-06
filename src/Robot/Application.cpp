#include "./Application.hpp"
#include <iostream>

using namespace ev3dev;

/**
 * Default Constructor.
 */
Robot::Application::Application()
{

}

/**
 * Default Destructor.
 */
Robot::Application::~Application()
{

}

/**
 * Start the Robot!
 */
void Robot::Application::start()
{
    sound::speak("Hello, I am Robot!", true);
    std::cout << "Hello Robot!!" << std::endl;
}