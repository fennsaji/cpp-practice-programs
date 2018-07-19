
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int count = 0;
    string s1, s2;
    string::iterator i1,i2,i3,i4;
    getline(cin, s1);
    getline(cin, s2);
    // Removing same alphas in strings
    for(i1 = s1.begin(); i1<s1.end();i1++) {
        for(i3 = s1.begin(); i3<s1.end();i3++) {
            if(*i1 == *i3)
            s1.erase(remove(s1.begin(), s1.end(), *i1), s1.end());
        }
    }
    
    for(i2 = s2.begin(); i2<s2.end(); i2++) {
        for(i4 = s2.begin(); i4<s2.end(); i4++) {
            if(*i2 == *i4)
            s2.erase(remove(s2.begin(), s2.end(), *i2), s2.end());
        }
    }
    
    // Counting common alphas
    for(i1 = s1.begin(); i1<s1.end();i1++) {
        if((*i1 >= 65 && *i1 <= 90) || (*i1 >= 97 && *i1 <= 122)){
            for(i2 = s2.begin(); i2<s2.end(); i2++) {
                if((*i2 >= 65 && *i2 <= 90) || (*i2 >= 97 && *i2 <= 122)) {
                    if(*i1 == *i2){
                        count++;
                    }
                }
            }   
        }
    }
    cout<<"Number of common alphas is/are "<<count;

    return 0;
}
