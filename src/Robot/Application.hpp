#ifndef ROBOT_APPLICATION_HPP
#define ROBOT_APPLICATION_HPP

#include "./../../robot-libs/ev3dev.h"

namespace Robot {
    class Application {
        public:
            Application();
            ~Application();
            void start();
    };
};

#endif
