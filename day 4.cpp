#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int k=n;
    int i = 0;
    while(n>0){
        n = n/10;
        i++;
    }
    int sum= 0;
    int l;
    while(k>0){
        l = k%10;
        sum = sum*10 + pow(l,i);
        k = k/10;
    }
    if(sum=n){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}
