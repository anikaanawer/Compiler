#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
    string s;
    cin>>s;
    if(s[0]=='a')
    {
        int cnt=0;
        for(int i=1; i<s.size(); i++)
        {
            if(s[i]=='b')
            {
                cnt++;

            }
        }
        if(cnt%2)
            cout<<"Accepted"<<endl;
        else
            cout<<"Not Accepted"<<endl;
    }
    else
     cout<<"Not Accepted"<<endl;
    }

}
