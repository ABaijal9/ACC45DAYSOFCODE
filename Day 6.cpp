#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;


    for(int j=1; j<=n; j++){
        //space loop
        for(int t=0; t<=j; t++){
            cout<<" ";
        }

        //star loop
        for(int i = 0; i<=n-j; i++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    

}
