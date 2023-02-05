#include<iostream>
#include<bits/stdc++.h>
#include<ostream>
using namespace std;
vector<vector<int> > pst(int n){
    vector<vector<int> > pascal(n);
    for(int i=0;i<n;i++){
           vector<int> ith_vector=pascal[i];
            // pascal.resize(i+1);
            ith_vector.resize(i+1);
            for(int j=0;j=i+1;j++){
                if(j==0 || j==i){
                    pascal[i][j]==1;
                }
                else{
                pascal[i][j]=pascal[i-1][j]+pascal[i-1][j-1];

                }
            }
    }
    
}
int main(){
    int n;
    // int ith_vector;
    cout<<"Enter:";
    cin>>n;
    vector<vector <int> > ans;
    ans=pst(n);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<[i][j];
        }
        cout<<endl;
    }

}