#include<iostream>
#include<vector>
using namespace std;
void mostFreq3(int ar[], int n, int b[3]) {
    int br[n]={0},index[n]={0};
    int a[]={1,2,3,3,5,5,5};
    int check_a[n]={0};
    b[3]={0};
    for(int i=0;i<n;i++){
        if(check_a[i]!=0)
        continue;
        for(int j=i;j<n;j++){
            if(a[i]==a[j]){
                check_a[j]=1;
                br[i]++;
                index[i]=1;             
            }
        }
    }
    for(int j=0;j<n;j++){
      cout<<br[j]<<"\n";
    }
}
/*{
           int i, j,count[n];
          for (i = 0; i < n-1; i++) {      
            for (j = 0; j < n-i-1; j++) {
               if (a[j] >= a[j+1])
                   {
                     int temp = a[j];
                     a[j+1] = a[j];
                     a[j] = temp;
                }
               }
          }
      for(int i=0; i<n; i++) {
          cout<<a[i]<<" ";
      }
    }*/
    int main(){
        int arr[]={5,2,3,5,2,4,3};
        int b[3];
        mostFreq3(arr,7,b);
    }