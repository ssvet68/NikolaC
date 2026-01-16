//Header File
//io.h
/* Citation and Sources...
-----------------------------------------------------------
OOP244 Workshop #1: io module HEADER FILE
Module: io
Filename: io.h
-----------------------------------------------------------
Author: Nikola Stojanovic
Student number: 027369149
Email: nstojanovic@myseneca.ca
Subject: BTP200NAA
-----------------------------------------------------------
Revision History
------- --------- ------------------------------------------
Version Date        Reason
V0.1    2025/01/14  Created file , def SENECA_IO_H , created namespace seneca
V0.2    2025/01/15  added function siguratures to be used in io.cpp 
V0.3    2025/01/16  Complied the file, Tested them got right output
V0.4    2025/01/16  Ready for submission
-----------------------------------------------------------
I have done all the coding by myself and only copied the code 
that my professor provided to complete my work for function whatever.
-----------------------------------------------------------
*/
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