#include <bits/stdc++.h>

using namespace std;
int n,suma,c=1,a[100][100];
int main()
{
    cin>>n;
    for (int j=1; j<=n; j++)
    {
        a[n][j]=j;
    }
    for(int i=n-1; i>=1; i--)
    {
        for(int j=1; j<=n; j++)
        {
            suma=0;
            if(j>=2) suma+=a[i+1][j-1];
            suma+=a[i+1][j];
            if(j<=n-1) suma+=a[i+1][j+1];
            a[i][j]=suma;
        }
    }
    c=2;
    for(int i=1;i<n;i++){
        for(int j=c;j<=n;j++){
            a[i][j]=0;
        }
        c++;
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
