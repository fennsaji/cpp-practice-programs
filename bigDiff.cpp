/* Read input from STDIN. Print your output to STDOUT*/
#include<iostream>   
#include <new>
#include <limits>

using namespace std;

int main(int argc, char *a[])
{
    //Write code here
    int n, smallest = numeric_limits<int>::max(), largest = 0;
    int * arr;
    cin>>n;
    arr = new (nothrow) int[n];
    if(arr == nullptr)
        cout<<"No memory allocated";
    else {
        for(int i=0; i<n; i++) {
            cin>>arr[i];
            if(arr[i]> largest)
                largest = arr[i];
            if(arr[i]< smallest)
                smallest = arr[i];
        }
    cout<<largest-smallest<<endl;
    }

    delete[] arr;
}
