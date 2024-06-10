#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int b = 10;
    int c;
    if (a && b)
    {
        cout<<"Line1 - the condition is true" <<endl;
    }
    if (a||b)
    {
        cout<< "Line2 - the condition is true"<<endl;

    }
    // lets change the value of a and b
    a = 0;
    b = 10;
    if (a && b)
    {
        cout<<"Line 3 - the condition is true" <<endl;
    }
    else{
        cout<<"Line 4 - the condition is false "<<endl;
    }
    if (!a && b)
    {
        cout<< "Line2 - the condition is true"<<endl;

    }
    return 0;
}