#include<bits/stdc++.h>
using namespace std;
int main()
{
    char pi='^',epsilon='@';
    int t;cin>>t;
    while(t--)
    {
    string s;
    cin>>s;
    bool c=1;
    for(int i=1;i<s.size();i++)
    {
        if(s[0]==s[i])
        {
            c=0;
            break;
        }
    }
    int lenth=s.size()-1;
    if(c)cout<<s<<"->The grammar is not left recursion."<<endl;
    else{
            cout<<s<<"->The grammar is left recursion."<<endl;
         cout<<"so the grammar without left recursion."<<endl;
         cout<<s[0]<<"->"<<s[4]<<s[lenth]<<s[0]<<pi<<"|"<<epsilon<<endl;
         cout<<s[0]<<"->"<<s[lenth]<<s[0]<<pi<<endl;
    }
    }
}
