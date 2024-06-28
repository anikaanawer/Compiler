/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    ifstream fin("inputleaders.txt");
    string num;
    cout<<"Input: "<<'\n';
    int count = 1;
    vector<string> a;
    while(getline(fin,num))
    {
        cout<<count<<")\t"<<num<<'\n';
        a.push_back(num);
        count++;
    }
    map<int,int> mp;
    mp[0] = 0;
    int curr = 0;
    for(auto q : a)
    {
        for(i=0; i<q.size()-3; i++)
        {
            if((q[i] == 'g'&&q[i+1] == 'o'&&q[i+2] == 't'&&q[i+3] == 'o')||(q[i] == 'G'&&q[i+1] == 'O'&&q[i+2] == 'T'&&q[i+3] == 'O'))
            {
                string num = "";
                int j = i+6;
                while(q[j]>='0'&&q[j]<='9'&&j<q.size()) num+=q[j],j++;
                int temp = stoi(num);
                mp[temp-1] = 1;
            }
        }
        curr++;
    }
    vector<pair<int,string>> leaders;
    vector<vector<pair<int,string>>> blocks;
    for(auto q : mp)
    {
        leaders.push_back({q.first+1,a[q.first]});
    }
    vector<pair<int,string>> temp;
    for(i=0; i<a.size(); i++)
    {
        if(mp.count(i))
        {
            blocks.push_back(temp);
            temp.clear();
        }
        temp.push_back({i+1,a[i]});
    }
    blocks.push_back(temp);
    cout<<"\n\nLeaders:"<<'\n';
    for(auto q : leaders) cout<<q.first<<")\t"<<q.second<<'\n';
    cout<<"\nBlocks:\n"<<'\n';
    for(i=1; i<blocks.size(); i++)
    {
        cout<<"Block "<<i<<": "<<'\n';
        for(auto q : blocks[i]) cout<<q.first<<")\t"<<q.second<<'\n';
        cout<<'\n';
    }
    return 0;
}*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct three
{
    char data[10],temp[7];
} s[30];
void main()
{
    char d1[7],d2[7]="t";
    int i=0,j=1,len=0;
    FILE *f1,*f2;
    clrscr();
    f1=fopen("sum.txt","r");
    f2=fopen("out.txt","w");
    while(fscanf(f1,"%s",s[len].data)!=EOF)
        len++;
    itoa(j,d1,7);
    strcat(d2,d1);
    strcpy(s[j].temp,d2);
    strcpy(d1,"");
    strcpy(d2,"t");
    if(!strcmp(s[3].data,"+"))
    {
        fprintf(f2,"%s=%s+%s",s[j].temp,s[i+2].data,s[i+4].data);
        j++;
    }
    else if(!strcmp(s[3].data,"-"))
    {
        fprintf(f2,"%s=%s-%s",s[j].temp,s[i+2].data,s[i+4].data);
        j++;
    }
    for(i=4; i<len-2; i+=2)
    {
        itoa(j,d1,7);
        strcat(d2,d1);
        strcpy(s[j].temp,d2);
        if(!strcmp(s[i+1].data,"+"))
            fprintf(f2,"\n%s=%s+%s",s[j].temp,s[j-1].temp,s[i+2].data);
        else if(!strcmp(s[i+1].data,"-"))
            fprintf(f2,"\n%s=%s-%s",s[j].temp,s[j-1].temp,s[i+2].data);
        strcpy(d1,"");
        strcpy(d2,"t");
        j++;
    }
    fprintf(f2,"\n%s=%s",s[0].data,s[j-1].temp);
    fclose(f1);
    fclose(f2);
    getch();
}
I
