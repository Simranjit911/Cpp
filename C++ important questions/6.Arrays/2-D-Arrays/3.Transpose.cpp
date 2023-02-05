#include<iostream>
using namespace std;
// Transpose of the matrix
int main(){
    int m,n;
    cout<<"Enter row and col:";
    cin>>m;
    cin>>n;
    int mat[m][n];
    int trans[n][m];
    cout<<"Enter the matrix:";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    cout<<"Orignal matrix:";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }cout<<endl;
    }
    cout<<"After transpose:"<<endl;
    // transpose
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            trans[i][j]=mat[j][i];
        }
    }
    // Printing
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }


}