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

#include "./Console.hpp"

namespace colorize = color;

/*
-----------------------------------------------------------------------------
Log text level definitions.
-----------------------------------------------------------------------------
*/
const char *robot::logger::Console::LEVEL_DEBUG_TEXT   = "DEBUG";
const char *robot::logger::Console::LEVEL_INFO_TEXT    = "INFO";
const char *robot::logger::Console::LEVEL_WARN_TEXT    = "WARNING";
const char *robot::logger::Console::LEVEL_ERROR_TEXT   = "ERROR";
const char *robot::logger::Console::LEVEL_SUCCESS_TEXT = "SUCCESS";

/*
-----------------------------------------------------------------------------
Print a message on the console with requested level.
-----------------------------------------------------------------------------
*/
void robot::logger::Console::log(const unsigned int level, const std::string &message)
{
    const char *levelColor;
    const char *levelText;
    const char *separator;

    switch(level) {
        case robot::logger::LEVEL_DEBUG:
            separator = "----> ";
            levelColor = robot::logger::color::BLUE;
            levelText  = robot::logger::Console::LEVEL_DEBUG_TEXT;
            break;
        case robot::logger::LEVEL_INFO:
            separator = "-----> ";
            levelColor = robot::logger::color::CYAN;
            levelText  = robot::logger::Console::LEVEL_INFO_TEXT;
            break;
        case robot::logger::LEVEL_WARN:
            separator = "--> ";
            levelColor = robot::logger::color::YELLOW;
            levelText  = robot::logger::Console::LEVEL_WARN_TEXT;
            break;
        case robot::logger::LEVEL_ERROR:
            separator = "----> ";
            levelColor = robot::logger::color::RED;
            levelText = robot::logger::Console::LEVEL_ERROR_TEXT;
            break;
        case robot::logger::LEVEL_SUCCESS:
            separator = "--> ";
            levelColor = robot::logger::color::GREEN;
            levelText = robot::logger::Console::LEVEL_SUCCESS_TEXT;
            break;
    }
    
    std::cout << "[ " << colorize::rize(levelText, levelColor) << " ] " << separator << message << std::endl;
}

/*
-----------------------------------------------------------------------------
Return a RED message.
-----------------------------------------------------------------------------
*/
std::string robot::logger::Console::red(const std::string &message) 
{
    return colorize::rize(message, robot::logger::color::RED);
}

/*
-----------------------------------------------------------------------------
Return a GREEN message.
-----------------------------------------------------------------------------
*/
std::string robot::logger::Console::green(const std::string &message)
{
    return colorize::rize(message, robot::logger::color::GREEN);
}

/*
-----------------------------------------------------------------------------
Return a YELLOW message.
-----------------------------------------------------------------------------
*/
std::string robot::logger::Console::yellow(const std::string &message)
{
    return colorize::rize(message, robot::logger::color::YELLOW);
}

/*
-----------------------------------------------------------------------------
Return a BLUE message.
-----------------------------------------------------------------------------
*/
std::string robot::logger::Console::blue(const std::string &message)
{
    return colorize::rize(message, robot::logger::color::BLUE);
}

/*
-----------------------------------------------------------------------------
Return a MAGENTA message.
-----------------------------------------------------------------------------
*/
std::string robot::logger::Console::magenta(const std::string &message)
{
    return colorize::rize(message, robot::logger::color::MAGENTA);
}

/*
-----------------------------------------------------------------------------
Return a CYAN message.
-----------------------------------------------------------------------------
*/
std::string robot::logger::Console::cyan(const std::string &message)
{
    return colorize::rize(message, robot::logger::color::CYAN);
}