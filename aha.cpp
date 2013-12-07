/*
 * aha.cpp
 *
 *  Created on: Dec 7, 2013
 *      Author: Rong Xiao
 */
// #include "aha.hpp"

#include <string>
#include <iostream>
using namespace std;

template <const string* s> struct Print {  // can't overload
    static void print() {
        cout << (*s) << endl;
    }
};


template <const string& s> struct Print2 {
    static void print() {
        cout << s << endl;
    }
};

string hello;

int main() {
    // const string s{"Hello"};
    hello = "Hello world!";
    Print<&hello>::print();
    Print2<hello>::print();
    return 0 ;
}
