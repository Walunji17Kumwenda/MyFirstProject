 //QUESTION 1
#include <iostream>
#include <ctime> // allows us to use time()
#include <cstdlib>// allows us to use srand() and rand()
using namespace std;
int main()
{
    srand(time(0));//seed the random number generator by using current time
    int daysUntilExpiration = rand() % 12; // generates random values between 0 and 11
//if else statement used to check subscription
    if(daysUntilExpiration == 1)
    {
        cout << "Your subscription expires  within a day!\n Renew now and save 20%!"; 
    }
    else if ((daysUntilExpiration <=  5) && (daysUntilExpiration != 0))
    {
        cout << "Your subscription ends in " << daysUntilExpiration << " days \n Renew now and save 10%!";
    }
    else if  ((daysUntilExpiration <= 10) && (daysUntilExpiration != 0))
    {
        cout << "Your subscription will expire soon.Renew now!";
    }
    else if (daysUntilExpiration > 10)
    {
        cout << "You have an active subscription.";
    }
    else 
    {
        cout << "Your subscription has expired.";
    }
    return 0;
}