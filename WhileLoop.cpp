#include <iostream>
#include <limits>//helps to access the max() function
using namespace std;
int main()
{
    int number;
    cout << "Enter an integer value between 5 and 10:\n";//prompts user to enter an integer valur between 5 and 10
    cin >> number;
    while(!((number > 5) && (number < 10)))
    {
     if(!(cin >> number))// checks if the input is not a valid representation of an integer
     {
        cout << "Sorry, you entered an invalid number, please try again.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');// prevents an infinity loop
     }
    else if ((number >= 0) || (number <=5) || (number >= 10))//checks if the number is not  between 5 and 10
     {
        cout << "You entered " << number << ". Please enter a number between 5 and 10.\n";
        cin >> number;
     }    
     else
     {
        break;
     }
    }
    cout << "Your input value ("<< number<< ") has been accepted";
    return 0;
}