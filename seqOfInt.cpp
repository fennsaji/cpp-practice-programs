#include<iostream>
#include<vector>

using namespace std;

int sequenceOfIntegers(int n,int k)
{
	//Write code here
	int count = 1;
	// double k;
	vector <int> arr;
    vector <int> :: iterator i;
    arr.push_back(count);
    cout<<arr.at(0);

    while(--n) {
        arr.push_back(count);
        for(i=arr.begin(); i!=arr.end(); ++i) {
            arr.push_back(1);
        }
        count++;
    }
    // for (i = arr.begin(); i != arr.end(); ++i)
    //     cout << *i << '\t';
    // cout<<endl<<arr.at(k);
    return 0;
}

int main() {
    int n, k;
    cin>>n>>k;
    sequenceOfIntegers(n,k);
    return 0;
}