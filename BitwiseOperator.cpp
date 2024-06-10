#include <iostream>
using namespace std;
main(){
    unsigned int a = 60;
    unsigned int b = 13;
    int c;
    c = a & b;
    cout << "Line 1- value of c is: " << c << endl;
    
    c = a|b;
    cout << "Line 2- value of c is: " << c << endl;

    c = a ^ b;
    cout << "Line 3- value of c is: " << c << endl;

    c = a >> 2;
    cout << "Line 4- value of c is: " << c << endl;

    c = a << 2;
    cout << "Line 5- value of c is: " << c << endl;

    return 0;
}