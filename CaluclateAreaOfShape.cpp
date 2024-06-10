#include <iostream>
 void CalculateShape();
 void AreaOfSquare();
 void AreaOfRectangle();
 void AreaOfTriangle();
using namespace std;
int main()
{
    CalculateShape();
    return 0;
}


void CalculateShape()
{
    cout <<"Please select the area of the shape to calculate \n";
    cout << "1.\tSquare\n 2.\tRectangle\n 3.\tTriangle\n4.\tQuit Program\n";
    cout << "\n"<< "Enter selection: ";
    int selection;
            if  (selection == 1)
            {
                AreaOfSquare();
            }
            else if(selection == 2)
            {
                AreaOfRectangle();
            }
            else if(selection == 3)
            {
                AreaOfTriangle();
            }
            else if(selection == 4)
            {
                exit(0);
            }
            else
            {
                cout << "Your input was: " << selection <<  " which is an invalid input\nPlease enter a valid input!!!";
                CalculateShape();
            }
}
    
        
void AreaOfSquare()
{
    cout << "Enter the length of the square: ";
    double length;
    cin >> length;
    double result = length * length;
    cout << "The area of the square of the length " << length << " is " << result << " meters squared";
}
 void AreaOfRectangle()
 {
    cout << "Enter the length of the rectangle: ";
    double length;
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    double width;
    cin >> width;
    double result = length * width;
    cout <<"The area of the rectangle of length " << length << " and of width " << width << " is " << result << "meters squared.";
 }
 void AreaOfTriangle()
 {
    cout << "Enter the base of the triangle: ";
    double base;
    cin >> base;
    cout << "Enter the height of the triangle: ";
    double height;
    cin >> height;
    double result = 0.5 * base * height;
    cout <<"The area of the triangle of base " << base << " and of height " << height << " is " << result << "meters squared.";
 }