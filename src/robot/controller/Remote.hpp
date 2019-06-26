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

#include "../../../include/ev3dev/ev3dev.h"
#include "../../../include/robot/controller/remote/HandlersInterface.hpp"

using namespace std;
using namespace ev3dev;
using namespace robot::controller::remote;

#ifndef ROBOT_CONTROLLER_REMOTE
#define ROBOT_CONTROLLER_REMOTE
    namespace robot
    {
        inline namespace controller
        {
            /*
            -----------------------------------------------------------------------------
            Class to operate with EV3 infrared sensor remote.
            -----------------------------------------------------------------------------
            */
            class Remote
            {
                private:
                    /*
                    -----------------------------------------------------------------------------
                    EV3 infrared sensor remote.
                    -----------------------------------------------------------------------------
                    */
                    remote_control remote_controller;

                    /*
                    -----------------------------------------------------------------------------
                    EV3 infrared sensor remote event handlers.
                    -----------------------------------------------------------------------------
                    */
                    shared_ptr<HandlersInterface> event_handlers;

                    /*
                    -----------------------------------------------------------------------------
                    Bind Red UP button event handler.
                    -----------------------------------------------------------------------------
                    */
                    void bind_red_up();

                    /*
                    -----------------------------------------------------------------------------
                    Bind Red DOWN button event handler.
                    -----------------------------------------------------------------------------
                    */
                    void bind_red_down();

                    /*
                    -----------------------------------------------------------------------------
                    Bind Blue UP button event handler.
                    -----------------------------------------------------------------------------
                    */
                    void bind_blue_up();

                    /*
                    -----------------------------------------------------------------------------
                    Bind Blue DOWN button event handler.
                    -----------------------------------------------------------------------------
                    */
                    void bind_blue_down();

                    /*
                    -----------------------------------------------------------------------------
                    Beacon button event handler.
                    -----------------------------------------------------------------------------
                    */
                    void bind_beacon();

                    /*
                    -----------------------------------------------------------------------------
                    Init all button event handler bindings.
                    -----------------------------------------------------------------------------
                    */
                    void init_bindings();

                public:
                    /*
                    -----------------------------------------------------------------------------
                    Constructor.
                    -----------------------------------------------------------------------------
                    */
                    Remote(shared_ptr<HandlersInterface> handlers);

                    /*
                    -----------------------------------------------------------------------------
                    Start processing.
                    -----------------------------------------------------------------------------
                    */
                    void start_processing();
            };
        };
    };
#endif