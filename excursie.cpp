#include <bits/stdc++.h>

using namespace std;

int n,z,oras,consum[1001],castig[1001],rezervor,contor;
bool gasit=false,negativ;

int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>consum[i];
        cin>>castig[i];
    }
    for(int i=1; i<=n; i++)
    {
        rezervor=0;
        contor=0;
        if(gasit)
        {
            break;
        }
        negativ=false;
        z=i;
        while(contor<n && !negativ)
        {
            rezervor=rezervor+castig[z]-consum[z];
            if(rezervor<0)
            {
                negativ=true;
                break;
            }
            contor++;
            z++;
            if(z>n)
            {
                z=1;
            }
        }
        if(negativ==false)
        {
            gasit=true;
            oras=i;
        }
    }
    if(gasit==true)
    {
        cout<<oras;
    }
    else
    {
        cout<<-1;
    }
}
