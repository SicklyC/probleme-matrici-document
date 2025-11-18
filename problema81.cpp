    #include <iostream>

    using namespace std;
    int a[100][100],sum=0,n,m,k;
    int main()
    {
       cin>>n>>m>>k;
       for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
       }
       for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(a[j][i]==k){
               sum+=i ;
               break;            }
        }
       }
       cout<<sum;

        return 0;
    }
