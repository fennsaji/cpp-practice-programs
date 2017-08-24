#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    // declare 2D vector
    // vector< vector<int> > myVector;
    // make new row (arbitrary example)
    // vector<int> myRow(1,5);
    // myVector.push_back(myRow);
    // add element to row
    // myVector[0].push_back(1);

    // vector< vector<int> > sum(4,vector<int>(4));
    int sum[4][4]= {0};
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }

    // sum of hourglasses
    for(int arr_i = 0;arr_i < 4;arr_i++){
        for(int arr_j = 0;arr_j < 4;arr_j++){
           for(int i=arr_i;i<=arr_i+2;i+=2) {
                for(int j=arr_j;j<=arr_j+2;j++) {
                    sum[arr_i][arr_j]+=arr[i][j];
                }
            }
            sum[arr_i][arr_j]+=arr[arr_i+1][arr_j+1];
        }
    }

    // minimum negative number
    int big=numeric_limits<int>::min();
    for(int arr_i = 0;arr_i < 4;arr_i++){
        for(int arr_j = 0;arr_j < 4;arr_j++){
           if(big<sum[arr_i][arr_j]){
               big=sum[arr_i][arr_j];
           }
        }
     }

     cout<<big<<"\n";
    return 0;
}
