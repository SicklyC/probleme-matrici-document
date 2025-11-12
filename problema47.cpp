#include <bits/stdc++.h>

using namespace std;
int a[100][100],b[100][100],n,m;
int main()
{
    cin>>m>>n;

    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<endl;
    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
        {
            b[n-j+1][i]=a[i][j];
        }

    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
            cout<<b[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
