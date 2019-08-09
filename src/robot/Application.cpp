/*
-----------------------------------------------------------------------------
Copyright (c) 2019 Kamil Badura <kamil.devel@gmail.com>

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
-----------------------------------------------------------------------------
*/

#include "Application.hpp"

using namespace robot;

/*
-----------------------------------------------------------------------------
Default constructor.
-----------------------------------------------------------------------------
*/
Application::Application()
{
    /* Application state */
    this->init_state();

    /* Initialize features */
    this->init_features();
}

/*
-----------------------------------------------------------------------------
Destructor.
-----------------------------------------------------------------------------
*/
Application::~Application()
{
    logger::Console::log(LEVEL_DEBUG, "Robot application main thread " + Console::yellow("STOPPED"));
}

/*
-----------------------------------------------------------------------------
Initialize application state.
-----------------------------------------------------------------------------
*/                
void Application::init_state(void)
{
    this->state = make_shared<State>();
}

/*
-----------------------------------------------------------------------------
Initialize all Robot features.
-----------------------------------------------------------------------------
*/                
void Application::init_features(void)
{
    logger::Console::log(LEVEL_DEBUG, "Initialize Robot application " + Console::cyan("features"));

    /* Infrared remote feature */
    this->features.insert(make_pair("Remote", make_shared<Remote>(this->state)));
}

/*
-----------------------------------------------------------------------------
Run the application (c++17 not working with cross compile, c++11 used).
-----------------------------------------------------------------------------
*/
void Application::run(void)
{
    logger::Console::log(LEVEL_DEBUG, "Robot application main thread " + Console::green("STARTED"));

    for(auto &feature : this->features) {
        cout << feature.first << endl;
    }
}