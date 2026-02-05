#include <iostream>
using namespace std;

/*
Member Function (Method)
Types of Member functions
coding member functions
    - declaration
    - definition 
    - calling
*/

/* 2nd video  Data Privacy 
    - (private , public)
Privacy in struct and class
Accessing private data
*/

//encapsulation -to minimuze public access to the dclass members, attributes, fields
//      - make some fields, members private

//3rd video
/*
Object's State
Empty State
Use of Empty State
*/
/*
State of Mind: 
*/


//everything in struct has public access
class Country { 
 // makeing it private all declarations after private:
    char mName[32];
    unsigned int mArea;
    //some comment to test
public:
    // create function to access data or attributes to write or to re
    // 1.  (write data in to it)  setter, or mutator , or modifer
    /*inline*/ void set(const char* name, unsigned area); //treated as inline function  // to recieve name and area
         

    //2. (read data from it ) getter, query, accesser 
        // reads data in the attributes and returns it
    const char* getName() const { //query functions
        return mName;
    }
    unsigned getArea() const{ // query functions
        return mArea;
    } 

    //Getter function designed to access the data but do not make any changes to it
        // query function
    //Setter function designed to set data to the attributes, and make changes to them can not be const

    //3.  Special member functions 
    // Constructor and destructor - designed to execute logic during the 
        // creation or destruction of object
    // Purpose is to -- be created properly and distroyed properly 

    // 3. query function display 
    void display() const {
        cout << "Country Name: " << getName() << endl << "Country Area: " << getArea() << endl;
    }

};

// struct name :: function name (){}
// below to access the class or struct set functions if it is defined in header file
 void Country::set(const char* name, unsigned area){ //treated as inline function  // to recieve name and area
         strcpy(mName, name);
         mArea = area;
    }
//Empty State - a special state where you have data in the object which  is
  // in your control, but not a valid data to be used 

int main (void){


    Country ct; // a memory space is allocated for its attriibutes
    //object's state at this point - random or garbage

    //ct.set("",0); // object in empty state

    // invokeing a member function (set, get)
    ct.set("Serbia", 32546); // public access function  // public
    // object's state turns into a different one; contains vaild data, object in this state is us
    //useable

    

    ct.display(); // public
   
    return 0;
};