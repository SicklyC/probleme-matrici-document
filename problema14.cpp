#include <bits/stdc++.h>
using namespace std;
int nr,n,v[8],a[100][100];
int main()
{
    cin>>nr;
    while(nr){
        v[n]=nr%10;
        n++;
        nr/=10;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=v[j];
            }
        }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
