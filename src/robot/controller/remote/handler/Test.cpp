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

#include "Test.hpp"

using namespace std;
using namespace robot::controller::remote::handler;

/*
-----------------------------------------------------------------------------
Constructor.
-----------------------------------------------------------------------------
*/
Test::Test()
{

}

/*
-----------------------------------------------------------------------------
Destructor.
-----------------------------------------------------------------------------
*/
Test::~Test()
{

}

/*
-----------------------------------------------------------------------------
Red UP button event handler.
-----------------------------------------------------------------------------
*/
void Test::on_red_up(bool state)
{
    cout << "on_red_up" << " " << (state ? "pressed" : "released") << endl;
}

/*
-----------------------------------------------------------------------------
Red DOWN button event handler.
-----------------------------------------------------------------------------
*/
void Test::on_red_down(bool state)
{
    cout << "on_red_down" << " " << (state ? "pressed" : "released") << endl;
}

/*
-----------------------------------------------------------------------------
Blue UP button event handler.
-----------------------------------------------------------------------------
*/
void Test::on_blue_up(bool state)
{
    cout << "on_blue_up" << " " << (state ? "pressed" : "released") << endl;
}

/*
-----------------------------------------------------------------------------
Blue DOWN button event handler.
-----------------------------------------------------------------------------
*/
void Test::on_blue_down(bool state)
{
    cout << "on_blue_down" << " " << (state ? "pressed" : "released") << endl;
}

/*
-----------------------------------------------------------------------------
Beacon button event handler.
-----------------------------------------------------------------------------
*/
void Test::on_beacon(bool state)
{
    cout << "beacon" << " " << (state ? "pressed" : "released") << endl;
}