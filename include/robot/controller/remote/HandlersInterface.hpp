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

#ifndef ROBOT_CONTROLLER_REMOTE_HANDLERS_INTERFACE
#define ROBOT_CONTROLLER_REMOTE_HANDLERS_INTERFACE
    namespace robot
    {
        inline namespace controller
        {
            inline namespace remote
            {
                /*
                -----------------------------------------------------------------------------
                Type definition for event handler.
                -----------------------------------------------------------------------------
                */
                typedef void (*eventHandler)(bool);

                /*
                -----------------------------------------------------------------------------
                Interface for EV3 infrared sensor remote event handlers.
                -----------------------------------------------------------------------------
                */
                class HandlersInterface
                {
                    public:
                        /*
                        -----------------------------------------------------------------------------
                        Virtual destructor, to avoid memory leaks.
                        -----------------------------------------------------------------------------
                        */
                        virtual ~HandlersInterface()
                        {

                        }

                        /*
                        -----------------------------------------------------------------------------
                        Red UP button event handler.
                        -----------------------------------------------------------------------------
                        */
                        virtual void on_red_up(bool state) = 0;

                        /*
                        -----------------------------------------------------------------------------
                        Red DOWN button event handler.
                        -----------------------------------------------------------------------------
                        */
                        virtual void on_red_down(bool state) = 0;

                        /*
                        -----------------------------------------------------------------------------
                        Blue UP button event handler.
                        -----------------------------------------------------------------------------
                        */
                        virtual void on_blue_up(bool state) = 0;

                        /*
                        -----------------------------------------------------------------------------
                        Blue DOWN button event handler.
                        -----------------------------------------------------------------------------
                        */
                        virtual void on_blue_down(bool state) = 0;

                        /*
                        -----------------------------------------------------------------------------
                        Beacon button event handler.
                        -----------------------------------------------------------------------------
                        */
                        virtual void on_beacon(bool state) = 0;
                };
            };
        };
    };
#endif