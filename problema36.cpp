#include <bits/stdc++.h>

using namespace std;
int a[100][100],n,minim;
int main()
{
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cin>>a[i][j];
        }
    }
    for(int j=n; j>=1; j--)
    {
    minim=999999;
      for(int i=1; i<=n; i++){
          if(a[i][j]<minim)
            minim=a[i][j];
    }
    cout<<minim<<" ";
    }
    return 0;
}
