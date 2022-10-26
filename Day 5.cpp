#include <iostream>
using namespace std;
int main() {
    int arr[] = {4,2,1,7,9};
    int n = sizeof(arr)/sizeof(int);
    cout<<"Before Sorting"<<endl;
    for(int i=0; i<=n-1; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int pos = 0;

    for(pos=0; pos<= n-2; pos++){
        int min= pos;
      for(int j=pos+1 ; j<=n-1; j++){
    
         if(arr[j]<arr[min]){
         min= j;
         } 
         swap(arr[pos],arr[min]);
      }
    }  

    cout<<"After Sorting"<<endl;
    for(int i=0; i<=n-1; i++){
        cout<<arr[i]<<" ";
    }
}
