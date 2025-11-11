#include <bits/stdc++.h>
using namespace std;
int p,n,c=-2,a[100][100];
int main()
{
    cin>>n>>p;
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            c+=2;
            a[i][j]=c*c;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
