//Header File
//io.h
#ifndef SENECA_IO_H
#define SENECA_IO_H
#include <cstddef> // size_t
#include <cstdio> //FILE

namespace seneca{
     struct PhoneRec {
        char name[16];
        char lastname[26];
        long long number;
     };

     void read(char* name);

     void print(long long phoneNumber);

     void print (const PhoneRec& rec, size_t& row, const char* filter = nullptr );

     bool read (PhoneRec&, FILE* fptr);

     void print (PhoneRec* recPtrs[], size_t size, const char* filter = nullptr);

     void setPointers(PhoneRec* ptrs[], PhoneRec recs[], size_t size);

     void sort(PhoneRec* recPtrs[], size_t size, bool byLastName);

   
}

#endif