#include <bits/stdc++.h>
using namespace std;
int n,a,b,c[100][100];
int main()
{
    cin>>n>>a>>b;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==a||j==b){
            c[i][j]=0;
            }else if(i<a&&j<b){
            c[i][j]=1;
            }else if(i<a&&j>b){
            c[i][j]=2;
            }else if(i>a&&j<b){
            c[i][j]=3;
            }else
            c[i][j]=4;
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
            cout<<c[i][j]<<" ";
        cout<<endl;
    }
}
