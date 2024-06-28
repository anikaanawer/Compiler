#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool grapha[2],graphb[2],graphc[2];
    for(int i=0; i<2; i++)
    {
        cin>>grapha[i];
    }
    for(int i=0; i<2; i++)
    {
        cin>>graphb[i];
    }
    for(int i=0; i<2; i++)
    {
        cin>>graphc[i];
    }
    bool flag=0;
    for(int i=0; i<2; i++)
    {
        if(grapha[i]==0 or graphb[i]==0 or graphc[i]==0)
        {
            flag=1;
            break;
        }

    }
    if(flag)cout<<"It's not a DFA"<<endl;
    else
        cout<<"It's a DFA"<<endl;
}
