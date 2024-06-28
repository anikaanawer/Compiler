#include <bits/stdc++.h>
using namespace std;

string token(string prgm)
{
    int n = prgm.length();
   string res;


    for (int i=0; i<n; i++)
    {
       if(prgm[i]=='}') break;
      else if(prgm[i]=='+' or prgm[i]=='-' or prgm[i]=='<' or prgm[i]== '=' or prgm[i]=='>')
        cout<<prgm[i]<<" : "<<"Operator"<<endl;

       else if(prgm[i]==',' or prgm[i]==';')
         cout<<prgm[i]<<" : "<<"Separator"<<endl;

         else if((prgm[i]=='i' and prgm[i+1]=='n' and prgm[i+2]=='t') or (prgm[i]=='f' and prgm[i+1]=='l' and prgm[i+2]=='o' and prgm[i+3]=='a' and prgm[i+4]=='t'))
            cout<<prgm[i]<<prgm[i+1]<<prgm[i+2]<<" : "<<"Identifier"<<endl;

        else if((prgm[i]=='f' and prgm[i+1]=='o' and prgm[i+2]=='r')or(prgm[i]=='w' and prgm[i+1]=='h' and prgm[i+2]=='i' and prgm[i+3]=='l' and prgm[i+4]=='e')and(prgm[i]=='i' and prgm[i]=='f'))
            cout<<prgm[i]<<prgm[i+1]<<prgm[i+2]<<" : "<<"keyword"<<endl;


    }
    return res;
}

int main()
{
                  string prgm;
                  cout << " Token Identifier: "<<endl;
                while(1)
                {
                  getline(cin,prgm);
                cout << token(prgm);
                }
    return 0;
}



