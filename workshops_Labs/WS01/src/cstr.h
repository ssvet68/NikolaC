// Header File
//cstr.h
/* Citation and Sources...
-----------------------------------------------------------
OOP244 Workshop #1: cstr module HEADER FILE
Module: cstr
Filename: cstr.h
-----------------------------------------------------------
Author: Nikola Stojanovic
Student number: 027369149
Email: nstojanovic@myseneca.ca
Subject: BTP200NAA
-----------------------------------------------------------
Revision History
------- --------- ------------------------------------------
Version Date        Reason
V0.1    2025/01/13  Created file included header file,cstr.h cstr.h created namespace seneca
V0.2    2025/01/13  copyed string functions sigurtures from git to be used here
V0.3    2025/01/14  Complied the file, Tested them got right output
V0.4    2025/01/16  Ready for submission
-----------------------------------------------------------
I have done all the coding by myself and only copied the code 
that my professor provided to complete my work for function whatever.
-----------------------------------------------------------
*/
#ifndef SENECA_CSTR_H
#define SENECA_CSTR_H
#include <cstddef> 

namespace seneca {
    // declartions and prototypes

    char* strcat(char* des, const char* src);
    char tolower(char ch);
    char* tolower(char* des, const char* src);
    char* tolower(char* str);
    int strcmp(const char* s1, const char* s2);
    int strcmp(const char* s1, const char* s2, size_t len);
    char* strcpy(char* des, const char* src);
    char* strcpy(char* des, const char* src, size_t len);
    char* strncpy(char* des, const char* src, size_t len);
    size_t strlen(const char* str);
    const char* strstr(const char* str, const char* toFind);
    bool isalpha(char ch);
    bool isspace(char ch);
}

#endif // !SENECA_CSTR_H