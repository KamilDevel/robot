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

#ifndef ROBOT_LOGGER_CONSOLE_HPP
#define ROBOT_LOGGER_CONSOLE_HPP

#include <iostream>
#include <string>
#include "../../../include/colorize/colorize.hpp"

namespace robot 
{
    inline namespace logger 
    {
        /*
        -----------------------------------------------------------------------------
        Log levels definitions.
        -----------------------------------------------------------------------------
        */
        static const unsigned int LEVEL_DEBUG   = 2;
        static const unsigned int LEVEL_INFO    = 4;
        static const unsigned int LEVEL_WARN    = 8;
        static const unsigned int LEVEL_ERROR   = 16;
        static const unsigned int LEVEL_SUCCESS = 32;

        /*
        -----------------------------------------------------------------------------
        Avaliable colors definitions.
        -----------------------------------------------------------------------------
        */
        inline namespace color {
            static const char *RED     = "Red";
            static const char *GREEN   = "Green";
            static const char *YELLOW  = "Yellow";
            static const char *BLUE    = "Blue";  
            static const char *MAGENTA = "Magenta";
            static const char *CYAN    = "Cyan"; 
            static const char *WHITE   = "White";
        };

        /*
        -----------------------------------------------------------------------------
        Output to console.
        -----------------------------------------------------------------------------
        */
        class Console 
        {
            public:
                /*
                -----------------------------------------------------------------------------
                Log text level definitions.
                -----------------------------------------------------------------------------
                */
                static const char *LEVEL_DEBUG_TEXT;
                static const char *LEVEL_INFO_TEXT;
                static const char *LEVEL_WARN_TEXT;
                static const char *LEVEL_ERROR_TEXT;
                static const char *LEVEL_SUCCESS_TEXT;

                /*
                -----------------------------------------------------------------------------
                Print a message on the console with requested level.
                -----------------------------------------------------------------------------
                */
                static void log(const unsigned int level, const std::string &message);

                /*
                -----------------------------------------------------------------------------
                Return a RED message.
                -----------------------------------------------------------------------------
                */
                static std::string red(const std::string &message);
            
                /*
                -----------------------------------------------------------------------------
                Return a GREEN message.
                -----------------------------------------------------------------------------
                */
                static std::string green(const std::string &message);

                /*
                -----------------------------------------------------------------------------
                Return a YELLOW message.
                -----------------------------------------------------------------------------
                */
                static std::string yellow(const std::string &message);

                /*
                -----------------------------------------------------------------------------
                Return a BLUE message.
                -----------------------------------------------------------------------------
                */
                static std::string blue(const std::string &message);

                /*
                -----------------------------------------------------------------------------
                Return a MAGENTA message.
                -----------------------------------------------------------------------------
                */
                static std::string magenta(const std::string &message);

                /*
                -----------------------------------------------------------------------------
                Return a CYAN message.
                -----------------------------------------------------------------------------
                */
                static std::string cyan(const std::string &message);
        };
    };
};

#endif
