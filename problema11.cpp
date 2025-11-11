#include <bits/stdc++.h>
using namespace std;
int m,minim,maxim,n,v[100],a[100][100];
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++){
            minim=999999;
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            if(a[i][j]<minim)
                minim=a[i][j];
        }
                v[i]=minim;
    }
        maxim=-10000;
    for(int i=0;i<n;i++){
        if(v[i]>maxim)
            maxim=v[i];
}
    cout<<maxim;
}
