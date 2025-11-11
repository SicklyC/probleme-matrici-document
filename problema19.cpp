#include<bits/stdc++.h>
using namespace std;
int n,a[100][100];
int main()
{
    cin>>n;
    for(int i=0; i<n; i++)
    {
        if((i+1)%2==1)
        {
            for(int j=0; j<n; j++)
                a[i][j]=(i+1)+(j+1);
        }
        else
        {
            for(int j=0; j<n; j++)
            {
                int minim=a[i-1][j];
                if(j>0 && a[i-1][j-1] < minim)
                    minim=a[i-1][j-1];
                if(j<n-1 && a[i-1][j+1] < minim)
                    minim=a[i-1][j+1];
                a[i][j]=minim;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}
