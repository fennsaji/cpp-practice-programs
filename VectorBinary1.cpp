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
#include <unordered_map>

using namespace std;

int main(){
    int n,count=0,bigger=0;
    cin >> n;
    vector<int> binary;
    vector<int> big;
    vector <int> :: reverse_iterator i;
    while(n!=0){
        binary.push_back(n%2);
        n/=2;
    }
    
    for(i=binary.rbegin();i!=binary.rend();i++) {
        if(*i==0) {
            big.push_back(count);
            count=0;
        } else {
            count++;
        }
    }
    big.push_back(count);
    for(i=big.rbegin();i!=big.rend();i++) {
        if(*i>bigger) {
            bigger=*i;
        }
    }
    cout<<bigger;
    return 0;
}
