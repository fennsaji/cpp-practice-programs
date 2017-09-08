#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int sum[6]={0};
bool checkMagicSq(int arr[3][3]) {
    sum[6]={0};
    int k=0;
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            sum[k]+=arr[i][j];
        }
        k++;
    }
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            sum[k]+=arr[j][i];
        }
        k++;
    }
    for(int i=1; i<6; i++) {
        if(sum[i-1]!=sum[i])
            return 0;
    }
    return 1;
}

int main() {
    int arr[3][3];
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cin>>arr[i][j];
        }
    }
    bool check = checkMagicSq(arr);
    while(check!=1) {
        for(int i=0; i<3; i++) {
            for(int j=0; j<2; j++) {
                
            }
        }
    }
    cout<<check;
    return 0;
}
