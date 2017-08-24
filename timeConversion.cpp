#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s) {
    // Complete this function
    char temp[2];
    int pm=s.length()-2;
    for(int i=0; i<2; i++) {
        temp[i]=s.at(i);
    }
    // Converting string to int
    stringstream time(temp);
    int t=0;
    time>>t;
    if(s.at(pm)=='P'){
        if(t!=12)
        t+=12;
        // Converting int to string
        stringstream timenew;
        timenew<<t;
        return timenew.str()+s.substr(2,6);
    }
    else {
        if(t!=12)
        return s.substr(0,8);
        else {
            t-=12;
            stringstream timenew;
            timenew<<t;
            return "0"+timenew.str()+s.substr(2,6);
        }
    }
}

int main() {
    string s;
    cin >> s;
    string result = timeConversion(s);
    cout << result << endl;
    return 0;
}
