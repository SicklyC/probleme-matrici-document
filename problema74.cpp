#include <bits/stdc++.h>
int a[100][100],n,c,m;
using namespace std;

int main()
{
    cin>>n;
    c=0;m=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1&&j==1){
              a[i][j]=1;
            }else{
            a[i][j]=c+m;
            c=m;
            m=a[i][j];
        }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<a[i][j]%10<<" ";
        }
        cout<<endl;
    }
return 0;
}
