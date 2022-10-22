#include <iostream>
using namespace std;

// function creation
void waveform(int arr[100][100] , int t_rows , int t_cols){

    for(int j=0; j< t_cols; j++){ // here 'j' is the column
  
    if(j%2==0){
        for(int i = t_rows -1; i>=0 ;i--){ // here 'i' is the row
            cout<<arr[i][j]<<" ";
        }
    }

    else{
        for(int i=0; i<t_rows ;i++){
            cout<<arr[i][j]<<" ";
        }

    }
    cout<<endl;

}
}

int main() {
    //create matrix 
    int arr[100][100];

    int t_rows, t_cols;
    cin>>t_rows>>t_cols;

    //cin a matrix

    for(int rows = 0; rows<t_rows; rows++){
        for(int cols = 0; cols < t_cols; cols++){
            cin>>arr[rows][cols];
        }
    }

    //cout a matrix
    cout<<"cout in correct way:"<<"\n"<<endl;
    for(int rows = 0; rows<t_rows; rows++){
        for(int cols = 0; cols < t_cols; cols++){
            cout<<arr[rows][cols]<<" ";
        }
        cout<<endl;
    }

    cout<<"\n"<<"matrix in a waveform:"<<"\n"<<endl;
    waveform(arr, t_rows , t_cols); //called function

}