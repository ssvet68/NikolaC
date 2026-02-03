#include <iostream>

class Marks {
    // private attribtes 
    float marray[32]; // 32 size
    int msize;

    public:
        //special member function name like class name
        /*Marks() : msize(0) {}*/ // another way
       Marks(){
         msize= 0;

       } // defualt constructor // 0-arg constructor

        Marks (float marks) {
            msize = 1;
            marray[0] = marks;
        }

        Marks(const float* arr, int size) {
            //Data vaildation
            msize = 0; //setting to default state
            if (arr != nullptr && size > 0) {
                msize = size;
                for (int i = 0; i< size; i++) {
                    marray[i] = arr[i];
                }

            }
        }
        ~Marks() {} //deconstructor //if no dynamic array nothing in deconstructor

};


int main (void) {
    return 0;
}