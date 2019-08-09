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

#include <iostream>
#include <memory>
#include <map>
#include <string>
#include "logger/Console.hpp"
#include "application/State.hpp"
#include "application/feature/Interface.hpp"
#include "application/feature/Remote.hpp"

using namespace std;
using namespace robot::application;

#ifndef ROBOT_APPLICATION_HPP
#define ROBOT_APPLICATION_HPP
    namespace robot
    {
        /*
        -----------------------------------------------------------------------------
        Application class.
        -----------------------------------------------------------------------------
        */
        class Application
        {
            private:
                /*
                -----------------------------------------------------------------------------
                Application state.
                -----------------------------------------------------------------------------
                */          
                shared_ptr<State> state;

                /*
                -----------------------------------------------------------------------------
                Application features.
                -----------------------------------------------------------------------------
                */          
                map<string, shared_ptr<feature::Interface>> features;

                /*
                -----------------------------------------------------------------------------
                Initialize application state.
                -----------------------------------------------------------------------------
                */                
                void init_state(void);

                /*
                -----------------------------------------------------------------------------
                Initialize all Robot features.
                -----------------------------------------------------------------------------
                */                
                void init_features(void);
            public:
                /*
                -----------------------------------------------------------------------------
                Default constructor.
                -----------------------------------------------------------------------------
                */
                Application();

                /*
                -----------------------------------------------------------------------------
                Destructor.
                -----------------------------------------------------------------------------
                */
                ~Application();

                /*
                -----------------------------------------------------------------------------
                Run the application.
                -----------------------------------------------------------------------------
                */
                void run(void);
        };
    };
#endif