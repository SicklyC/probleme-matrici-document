#include <bits/stdc++.h>

using namespace std;
int n,m,suma,p=1,a[100][100];
bool ok=false;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=2;i<=n;i+=2){
        for(int j=1;j<=m;j+=2){
            if(a[i][j]>0){
            ok=true;
            p*=a[i][j];
            }
        }
    }
    cout<<p%10;
}
