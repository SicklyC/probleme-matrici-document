#include <iostream>

using namespace std;
int n,m,c=1,a[24][24];
int main()
{
    cin>>n>>m;
    for(int i=n-1;i>=0;i--){
        if(i%2==1){
        for(int j=0;j<m;j++){
            a[i][j]=c;
            c++;
        }
        }else{
        for(int j=m-1;j>=0;j--){
            a[i][j]=c;
            c++;

        }
        }
    }
     for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
