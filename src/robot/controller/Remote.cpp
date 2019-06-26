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

#include "Remote.hpp"

using namespace std;
using namespace robot::controller;

/*
-----------------------------------------------------------------------------
Constructor.
-----------------------------------------------------------------------------
*/
Remote::Remote(shared_ptr<HandlersInterface> handlers)
{
    this->event_handlers = handlers;

    this->init_bindings();

    this->start_processing();
}

/*
-----------------------------------------------------------------------------
Init all button event handler bindings.
-----------------------------------------------------------------------------
*/
void Remote::init_bindings()
{
    this->bind_red_up();
    this->bind_red_down();
    this->bind_blue_up();
    this->bind_blue_down();
}

/*
-----------------------------------------------------------------------------
Bind Red UP button event handler.
-----------------------------------------------------------------------------
*/
void Remote::bind_red_up()
{
    this->remote_controller.on_red_up = bind(&HandlersInterface::on_red_up, this->event_handlers, placeholders::_1);
}

/*
-----------------------------------------------------------------------------
Bind Red DOWN button event handler.
-----------------------------------------------------------------------------
*/
void Remote::bind_red_down()
{
    this->remote_controller.on_red_down = bind(&HandlersInterface::on_red_down, this->event_handlers, placeholders::_1);
}

/*
-----------------------------------------------------------------------------
Bind Blue UP button event handler.
-----------------------------------------------------------------------------
*/
void Remote::bind_blue_up()
{
    this->remote_controller.on_blue_up = bind(&HandlersInterface::on_blue_up, this->event_handlers, placeholders::_1);
}

/*
-----------------------------------------------------------------------------
Bind Blue DOWN button event handler.
-----------------------------------------------------------------------------
*/
void Remote::bind_blue_down()
{
    this->remote_controller.on_blue_down = bind(&HandlersInterface::on_blue_down, this->event_handlers, placeholders::_1);
}

/*
-----------------------------------------------------------------------------
Start processing. TODO: Thread safe.
-----------------------------------------------------------------------------
*/
void Remote::start_processing()
{
    while(true) {
        this->remote_controller.process();
    }
}