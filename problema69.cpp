#include <iostream>

using namespace std;
int n,a[100][100],c;
bool ok=true;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    c=n-1;
    for(int i=n-1;i>0;i--){
    for(int j=0;j<i;j++){
        if(a[i][j]!=0)
        ok=false;
    }
    }
    if(ok)
    cout<<"Este triunghiulara superior";
    else
    cout<<"Nu este triunghiulara superior";

}
