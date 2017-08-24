#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    unordered_map<string, int> ph_book;
    int n;
    long int phno;
    string name;
    cin>>n;
    for(int i = 0 ; i < n ; i++){
        cin>>name;
        cin>>phno;
        ph_book[name]=phno;
    }
    cin>>name;
    do{
        if(ph_book[name]!=0)
            cout<<name<<"="<<ph_book[name]<<"\n";
        else
            cout<<"Not found\n";
        name="";
        cin>>name;
    }while(!name.empty());
    
    return 0;
}
