#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    srand(time(0));
    int number = rand() % 12;
    int number2 = rand() % 12;
    cout << number << endl << number2;
    return 0 ;
}