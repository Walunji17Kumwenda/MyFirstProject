#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;
void reverse(string& s);
bool Vowel(char c);
int wordCount(const string& s);
void captalize(string& s);
int main()
{
    ifstream file("Advanced.txt");//open file
    string fileData;//string to hold the contents 
    string line;
    if(file.is_open())
    {
        while(getline(file, line))
        {
            fileData += line;//appends the statement to fileData

        }   
        file.close();
    }
    
   
    //calculates the number of vowels in the fileData
   int vcount = 0;
   for(char c: fileData)
   {
    if(Vowel(c))
    {
        vcount++;
    }
   }
   cout << "The number of vowels in the text file statement is: " << vcount << "\n\n";
  
   
   cout << "the number of words in the text file statement is "<< wordCount(fileData) <<"\n\n";
   // reverses  the text file statement
   reverse(fileData);
   cout << "the reversed text file statement is " << fileData << "\n\n";

   captalize(fileData);
   cout<<" File data with the second letter capitalized: "<< fileData <<"\n\n";
return 0;
}

void reverse(string& s)
{
    int m =0;
    int n = s.length()-1;
    while(m<n)
    {
        char i = s[m];
        s[m] = s[n];
        s[n] = i;
        m++;
        n--;
    }
}
bool Vowel(char c )
{
    c = tolower(c);// for case insenstive comparison
    return c== 'a'|| c=='e'|| c== 'i' || c=='o'|| c=='u'; 

}
int wordCount(const string& s)
{
    istringstream iss(s);
    string word;
    int wcount = 0;
    while(iss >> word)
    {
        wcount++;
    }
    return wcount;

}
void captalize(string& s)
{
    reverse(s);
    bool N = false;
    for(char& c: s)
    {
        if (!isspace(c) && !N)
        {
            N = true;
        }
        else if(N && isalpha(c))
        {
            c = toupper(c);
            N= false;
        }
        else
        {
            N = false;
        }
        
    }
}

