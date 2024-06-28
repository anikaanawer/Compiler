/*#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp1,*fp2;
    int flag=0;
    char ch;
    fp1=fopen("file1.c","r");
    fp2=fopen("file2.c","w");
    if(fp1==NULL)
    {
        printf("Error while opening a file for reading");
        return 0;
    }
    if(fp2==NULL)
    {
        printf("Error while opening a file for reading");
        return 0;
    }
    while((ch=fgetc(fp1))!=EOF)
    {
         if((ch=='/ ')&&(flag==0))
        {
            flag=1;
            continue;
        }
        else if((ch=='/')&&(flag==1))
        {
            flag=2;
            continue;
        }
        else if((ch=='*')&&(flag==1))
        {
            flag=3;
            continue;
        }
        if(flag==2)
        {
            if(ch=='n')
            {
              flag=0;
            }
            continue;
        }
        if(flag==3)
        {
            if(ch=='*')
            {
              flag=4;
            }
            continue;
        }
        if(flag==4)
        {
            if(ch=='/')
            {
              flag=0;
            }
            continue;
        }
        if(flag==0)
        {

            if((ch==13)||(ch==10))
            {
                continue;
            }
            else if((ch!=' '))
            {
               fputc(ch,fp2);
            }
        }
    }
    fclose(fp1);
    fclose(fp2);
    remove("file1.c");
    rename("file2.c","file1.c");
    fp1=fopen("file1.c","r");
    while((ch=fgetc(fp1))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(fp1);
    return 0;
}*/


// C++ program to remove comments from a C/C++ program

#include <iostream>
using namespace std;

string removeComments(string prgm)
{
    int n = prgm.length();
    string res;

    bool s_cmt = false;
    bool m_cmt = false;


    for (int i=0; i<n; i++)
    {
        if (s_cmt == true && prgm[i] == '\n')
            s_cmt = false;

        else if (m_cmt == true && prgm[i] == '*' && prgm[i+1] == '/')
            m_cmt = false, i++;

        else if (s_cmt || m_cmt)
            continue;

        else if (prgm[i] == '/' && prgm[i+1] == '/')
            s_cmt = true, i++;

        else if (prgm[i] == '/' && prgm[i+1] == '*')
            m_cmt = true, i++;

        else res += prgm[i];
    }
    return res;
}

int main()
{
    string prgm = " /* Test program */ \n"
                  " int main() \n"
                  " {		 \n"
                  "	 // variable declaration \n"
                  "	 int a, b, c; \n"
                  "	 /* This is a test \n"
                  "		 multiline	 \n"
                  "		 comment for \n"
                  "		 testing */	 \n"
                  "	 a = b + c;	 \n"
                  " }		 \n";
    cout << "Given Program \n";
    cout << prgm << endl;
    cout << " Modified Program ";
    cout << removeComments(prgm);
    return 0;
}

