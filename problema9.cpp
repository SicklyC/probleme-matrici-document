#include <bits/stdc++.h>
using namespace std;
int n,a[100][100];
int main()
{
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }
    for (int j=0;j<n;j++)
        cout<<a[0][j]<<" ";
    for (int i=1;i<n;i++)
        cout << a[i][n-1]<<" ";
    for (int j=n-2;j>=0;j--)
        cout <<a[n-1][j]<<" ";
    for (int i=n-2;i>=1;i--)
        cout <<a[i][0]<< " ";

}
