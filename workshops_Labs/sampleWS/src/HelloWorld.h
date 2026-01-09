#ifndef SENECA_HELLO_WORLD_H
#define SENECA_HELLO_WORLD_H

namespace seneca {
    struct HelloWorld{
        char content[32];
    };

    void printHW(struct HelloWorld& hw, const char* str);
    
};
#endif