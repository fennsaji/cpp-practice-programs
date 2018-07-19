/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;
    string::iterator i;
    int countChar = 0, countWords=0;
    getline(cin, a);
    for(i = a.begin(); i<a.end();i++) {
        if(*i!= ' ') 
            countChar++;
        else if(*i == ' ' && i != a.begin() )
            countWords++;
    }
    cout<<"Number of char is " << countChar << "\n";
    cout<<"Number of Words is " << countWords+1;
    return 0;
}
