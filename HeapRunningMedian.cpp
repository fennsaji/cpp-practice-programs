#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n,num;
    float median;
    cin >> n;
    vector<int> a;
    // vector<int> :: iterator i;
    // make_heap(a.begin(), a.end());
    for(int a_i = 0;a_i < n;a_i++){
        cin>>num;
        a.push_back(num);
        make_heap(a.begin(), a.end());
        push_heap(a.begin(), a.end());
        sort_heap(a.begin(), a.end());
        int size=a.size();
        if(size%2==0){
            median=a[((size/2)-1)]+a[(size/2)];
            median/=2; 
        }
        else
            median=a[size/2];
        if(median==(int)median)
            cout<<median<<".0\n";
        else
            cout<<median<<"\n";
    }
    return 0;
}
