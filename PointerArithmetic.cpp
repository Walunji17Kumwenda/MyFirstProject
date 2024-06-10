#include <iostream>
using namespace std;
int main()
{
    //null pointer
    int *pPointer = nullptr;
    int numberArray[3] = {10,20,30};
    //assign address of the first element to pointer
    pPointer = numberArray;
    //Output the address of the first element
    cout << "Address at pPointer: " << pPointer  <<endl;
    cout << "Address at numberArray[0]: " << numberArray << endl;
    // Output the value of the first element using the pointer and indirection
    cout << "Value at pPointer:  " << *pPointer <<endl;
    //This outputs the value of the  ss

}