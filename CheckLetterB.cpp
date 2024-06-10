//QUESTION 3
#include <iostream>
#include <string>// adds the string header file
using namespace std;
int main()
{
    std::string stringElements[8] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179" };//declare and initialize an array
    
    for(int i = 0; i < 8; i++)
    {
        if(stringElements[i][0] == 'B')
        {
            cout <<  stringElements[i] << endl;
        }
    }
 return 0;
   
    
}