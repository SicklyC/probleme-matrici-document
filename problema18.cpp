#include <bits/stdc++.h>
using namespace std;
int m,n,a[100][100];
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i%2==0){
            a[i][j]=i+1;
            }
            else{
            a[i][j]=j+1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
