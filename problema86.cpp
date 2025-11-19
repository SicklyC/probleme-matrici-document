#include <iostream>

using namespace std;
int n,c=1,a[100][100];
int main()
{
    cin>>n;
    for(int i=1;i<=n*2;i+=2){
        for(int j=1;j<=n*2;j++){
            a[i][j]=c;
            c+=2;
        }
    }
    c=2;
    for(int i=2;i<=n*2;i+=2){
        for(int j=n*2;j>=0;j--){
            a[i][j]=c;
            c+=2;
        }
    }
    for(int i=1; i<=n*2; i++)
    {
        for(int j=1; j<=n*2; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
