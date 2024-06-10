#include <iostream>
#include <fstream>
using namespace  std;
int main(){
    ofstream myfile("exampleFile.txt");
    if (myfile.is_open()){
        myfile<< "This is a line.\n";
        myfile<< "This is another line.\n";
        myfile<< "c++ is amazing.\n";
        myfile.close();
    }
    else {
        cout<<"unable to open file";
    }
    return 0;
}