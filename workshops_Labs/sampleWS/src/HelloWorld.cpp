#include <iostream>
#include "HelloWorld.h"



namespace seneca {
    void printHW(struct HelloWorld& hw, const char* str) {
        std::cout << hw.content << " " << str;
        std::cout << std::endl;
    };

   
}