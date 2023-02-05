#include<iostream>
using namespace std;
int main(){
    // for Matrix 1
    int row1,col1;
    cout<<"Enter matrix 1:";
    cin>>row1;
    cin>>col1;
    int arr1[row1][col1];
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            cin>>arr1[i][j];
        }
    }
    // Matrix 2
    int row2,col2;
    cout<<"Enter matrix 2:";
    cin>>row2;
    cin>>col2;
    int arr2[row2][col2];
    for(int i=0;i<row2;i++){
        for(int j=0;j<col2;j++){
            cin>>arr2[i][j];
        }
    }
    // Multiplication logic
    if(col1==row2){
        int mul[row1][col2];
        for(int i=0;i<row1;i++){
            for(int j=0;j<col2;j++){
                mul[i][j]=0;
                for(int k=0;k<col1;k++){
                    mul[i][j]+=arr1[i][k]*arr2[k][j];
                }
            }
        }
        cout<<"Matrix multiplication:"<<endl;
        for(int i=0;i<row1;i++){
            for(int j=0;j<col2;j++){
                cout<<mul[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    else{
        cout<<"Matrix multiplication is not possible";
    }

}