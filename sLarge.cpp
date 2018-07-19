/* Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
#include <limits>

using namespace std;

int findsmallest(int arr[], int n) {
    int smallest = numeric_limits<int>::max();
    for(int i=0; i<n; i++) {
        if(smallest > arr[i]) {
            smallest = arr[i];
        }
    }
    return smallest;
}

int findlargest(int arr[], int n) {
    int largest = 0;
    for(int i=0; i<n; i++) {
        if(largest < arr[i]) {
            largest = arr[i];
        }
    }
    return largest;
}

int * removeElement(int arr[], int ele, int n) {
    int * newArr = new int[n];
    for(int i=0; i<n; i++) {
        if(ele == arr[i]) {
            for(int j=i; j<n; j++) {
                newArr[j] = arr[j+1];
            } 
            return newArr;
        } else {
            newArr[i] = arr[i];
        }
    }
    return newArr;
}

// void printArray(int arr[], int n) {
//     for(int i=0; i<n; i++) {
//         cout<<arr[i]<<"\t";
//     }
//     cout<<"\n";
// }


int main(int argc, char *a[])
{
    //Write code here
    int n;
    //  fsmall = numeric_limits<int>::max(), ssmall = 0, flarge = 0 , slarge = 0;
    int * arr;
    cin>>n;
    arr = new (nothrow) int[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int large = findlargest(arr, n);
    int small = findsmallest(arr, n);
    // printArray(arr, n); 

    
    int slarge = findlargest(removeElement(arr, large, n), n-1);

    // printArray(arr, n);

    int ssmall = findsmallest(removeElement(arr, small, n), n-1); 

    // printArray(arr, n);

    // cout<<ssmall<<endl<<slarge<<endl;
    cout<<ssmall+slarge<<endl;
    delete [] arr;
}
