#include <iostream>

// namespace myscope1{

//     // after main function
//     int x= 56;
//     void foo () {
//         std::cout << "foo"<< std::endl;

//     } 
// }

namespace classroom {
    int x= 56;
    char sheets[3][20] = {"blank", "tracing", "lined"};// paper sheets

    void cook () { // to convert a source code into executable code
        std::cout << "1. Write a code"<< std::endl;
        std::cout << "2. Preprocess"<< std::endl;
        std::cout << "3. Compile"<< std::endl;
        std::cout << "4. Link libraries"<< std::endl;
        std::cout << "5. Create executable"<< std::endl;
     } 
}

namespace dormitory {
    double x= 3.14;
    char sheets[4][20] = {"single", "double", "queen", "king"};
    
    void cook () { 
        std::cout << "1. start with raw food"<< std::endl;
        std::cout << "2. cut into pieces"<< std::endl;
        std::cout << "3. heat up the oil"<< std::endl;
        std::cout << "4. out pieces un heated oil and str"<< std::endl;
        std::cout << "5. put water into it and let boil "<< std::endl;
        std::cout << "6. Check if cooked, power off oven "<< std::endl;
     } 
}
namespace std {

}
// with outputting classroom:: in front always
// two ways to make namespaces content available
    //1. using declaration
    //2. using directive

//using classroom::x;  // using declartion //using namespace_name::varable
//using classroom::sheets;
//using classroom::cook;

using namespace classroom; // using directive

//using std::count; // using declaration

//using std::endl;  // using declaction

using namespace std; // using directive








// Namespace is Not a Class

struct mystr  {

};

int main (){

    // name and scope
    //what is scope?
    // :: - scope resolution operator

    // {
    //     //block scope
    //     int x;

    //     x = 5;
    //     std::cout << "x:" << x <<std::endl;
    //     // x exsits in here only
    // }
    cout << "x:" << x <<endl;
    cout << "s-1:" << sheets[0] << endl;

    dormitory:: cook();
    cout << "s-3:" << sheets[2] <<endl;

    return 0;
}


