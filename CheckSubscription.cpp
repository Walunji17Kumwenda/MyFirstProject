//QUESTION 2
// using a switch statement to check users subscription
#include <iostream>
#include <ctime> // allows us to use time()
#include <cstdlib>// allows us to use srand() and rand()
using namespace std;
int main()
{
    srand(time(0));//seed the random number generator by using current time
    int daysUntilExpiration = rand() % 12; // generates random values between 0 and 11

    switch(daysUntilExpiration)
{
    case 0: cout << "Your subscription has expired." << endl;
            break;
    case 1: cout << "Your subscription expires  within a day!\n Renew now and save 20%!" << endl; 
            break;
    case 2: cout << "Your subscription ends in " << daysUntilExpiration << " days \n Renew now and save 10%!" << endl;
            break;
    case 3: cout << "Your subscription ends in " << daysUntilExpiration << " days \n Renew now and save 10%!" << endl;
            break;
    case 4: cout << "Your subscription ends in " << daysUntilExpiration << " days \n Renew now and save 10%!" << endl;
            break;
    case 5: cout << "Your subscription ends in " << daysUntilExpiration << " days \n Renew now and save 10%!" << endl;
            break;
    case 6: cout << "Your subscription will expire soon.Renew now!" << endl;
            break;
    case 7: cout << "Your subscription will expire soon.Renew now!" << endl;
            break;
    case 8: cout << "Your subscription will expire soon.Renew now!" << endl;
            break;
    case 9: cout << "Your subscription will expire soon.Renew now!" << endl;
            break;
    case 10:cout << "Your subscription will expire soon.Renew now!" << endl;
            break;
    case 11:cout << "You have an active subscription." <<  endl;
            break;
    
}
return 0;
}