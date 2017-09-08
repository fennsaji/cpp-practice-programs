#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int checkprime(int num) {
    if(num==1)
        return 0;
    if(num%2==0 && num!=2)
        return 0;
    for(int j=3; j<num/2; j+=2) {
        if(num%j==0){
            return 0;
        }
    }
    return 1;
}

int main() {
    int t,num,flag=0;
    cin>>t;
    for(int i=0; i<t; i++) {
        cin>>num;
        flag=checkprime(num);
        if(flag) 
            cout<<"Prime\n";
        else
            cout<<"Not prime\n";
        flag=0;
    }
    return 0;
}
