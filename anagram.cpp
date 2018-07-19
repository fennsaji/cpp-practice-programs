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



int number_needed(string a, string b) {

vector<int> checked_a(a.length(), 0);

vector<int> checked_b(b.length(), 0);



int fix=0;


checked_a.resize(a.length());

checked_b.resize(b.length());


for(int i=0; i<a.length(); i++) {

if(int bIndex=b.find(a[i]) != -1 && checked_b[bIndex]==0) {

checked_a[i]=1;

b.erase((bIndex),1);

checked_b.erase(checked_b.begin() + bIndex);

fix++;

}

}

return (count(checked_a.begin(), checked_a.end(), 0) + b.length() - fix);

}



int main() {

string a;

cin >> a;

string b;

cin >> b;

cout << number_needed(a, b) << endl;

return 0;

}