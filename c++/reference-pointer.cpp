#include <string>
#include <iostream>
using namespace std;

/*
References: reference to a variable (& operator)
ex: &name --> returns the memory address of the name variable
    - more efficient than calling the variable which would make a copy of the variable
    and store it twice in memory  

Pointers: point to memory addresses and stores variable's address
ex: string *ptr = &name


*/

int main() {
    string name = "Bob";
    string *ptr;
    
    cout << ptr << "\n";
    //memory address of ptr

    cout << &name << "\n";
    //memory address of name variable

    ptr = &name;

    cout << ptr << "\n";
    //now points to memory address of name variable

    cout <<*ptr << "\n";
    //value of name variable

    string &ref = name;
    cout << ref << "\n";
    //value of name variable

    cout << &ref << "\n";
    //same memory address as name
    //references get assigned one time, while pointers can move around

    string nameTwo = "Steve";

    ptr = &nameTwo;
    cout << ptr << "\n";
    //pointer now points to address of nameTwo

    


}
