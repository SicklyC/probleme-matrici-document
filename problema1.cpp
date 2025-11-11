#include <bits/stdc++.h>
using namespace std;
int m,n,a[100][100];
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i<j){
            a[i][j]=i+1;
            }
            else{
            a[i][j]=j+1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
