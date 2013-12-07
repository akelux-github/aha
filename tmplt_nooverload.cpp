/*
 * tmplt_nooverload.cpp
 *
 *  Created on: Dec 7, 2013
 *      Author: Rong Xiao
 */
#include <string>
#include <iostream>
using namespace std;

template <class T, class V> void fun(const T* p, V* q) {
    // *q = 1; fine if no constness violation
    cout << "version 2" << endl;
}

/*
template <class T, class V> void fun(T* a, V* b) {
    cout << "version 1" << endl;
}
*/

/*
// The following compiles
template <class T*, class V*> void fun(class T* p, class V* q) {
    cout << "version 2" << endl;
}
*/


int main() {
    int *p1;
    int i{0};
    const int *p2{&i};

    fun(p1,p1);
    fun(p1,p2);
    return 0;
}
