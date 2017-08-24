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

bool is_balanced(string expression) {
    vector<int> stackbracket;
    char ch;
    for(int i=0;expression[i]!='\0';i++){
        ch=expression[i];
        if(ch=='('||ch=='{'||ch=='['){
            stackbracket.push_back(ch);
        }
        else
        if(!stackbracket.empty()){
            if(ch==')'){
                if(stackbracket.back()!='(')
                return 0;
            }
            if(ch=='}'){
                if(stackbracket.back()!='{')
                return 0;
            }
            if(ch==']'){
                if(stackbracket.back()!='[')
                return 0;
            }
            stackbracket.pop_back();
        }
        else 
        return 0;    
        
    }
    if(stackbracket.empty())
    return 1;
    else
    return 0;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string expression;
        cin >> expression;
        bool answer = is_balanced(expression);
        if(answer)
            cout <<"YES\n";
        else cout <<"NO\n";
    }
    return 0;
}
