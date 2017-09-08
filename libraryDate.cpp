#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int checklate() {
    int dateExp, monthExp, yearExp, dateRec, monthRec, yearRec;
    cin>>dateRec>>monthRec>>yearRec;
    cin>>dateExp>>monthExp>>yearExp;
    if(yearExp/100!=0||yearRec/100!=0){
        if((yearExp>2100||yearExp<1770)||(yearRec>2100||yearRec<1770))
            return 0;
    }
    if(yearExp<yearRec)
        return 10000;
    else if(yearExp>yearRec)
        return 0;
    else {
        if(monthExp<monthRec) {
            return (monthRec-monthExp)*500;
        }
        else if(monthExp>monthRec)
            return 0;
        else {
            if(dateExp<dateRec) {
                return (dateRec-dateExp)*15;
            }
            else {
                return 0;
            }
        }
    }
    return 0;
}

int main() {
    int fine = checklate();
    cout<<fine;
    return 0;
}
