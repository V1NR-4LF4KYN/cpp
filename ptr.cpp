#include <iostream>
using namespace std;

int main() {
    int var = 10; // var with value 10
    int *ptr = 0; // null-pointer (safety reasons)

    ptr = &var; // assign pointer to address of var

    cout << *ptr << endl; // print value of var thru pointer
    cout << ptr << endl; // print address of var thru pointer

    return 0;
}
