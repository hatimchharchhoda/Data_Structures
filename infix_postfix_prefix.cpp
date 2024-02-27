#include<bits/stdc++.h>
using namespace std;

int presedence(char s)
{
    if(s=='^')
        return 3;
    if(s=='*' || s=='/')
        return 2;
    if(s=='+' || s=='-')
        return 1;
    else
        return -1;
}

void infixtopostfix(char a[])
{
    string result;
    char mid[10];
    int p=0;
    for(int i=0; i<strlen(a); i++)
    {
        char w=a[i];
        if((w>='a' && w<='z') || (w>='A' && w<='Z'))
        {
            result+=a[i];
        }
        else if(presedence(w)>presedence(mid[p]))
        {
            mid[++p]=w;
        }
        else if(presedence(w)==presedence(mid[p]))
        {
            result+=mid[p];
            mid[p]=w;
        }
        else
        {
            for(int j=0; presedence(w)<presedence(mid[p]) || presedence(w)==presedence(mid[p]); j++)
            {
                result+=mid[p--];
            }
            mid[++p]=w;
        }
    }
    for(int i=p; i>0; i--)
    {
        result+=mid[i];
    }
    cout<<endl<<"postfix: "<<result;
}

void infixtoprefix(char a[])
{
    int p=0,d=-1,l=strlen(a);
    char mid[10],b[l+1],result[l];
    strcpy(b,a);
    strrev(b);
    for(int i=0; i<l; i++)
    {
        char w=b[i];
        if((w>='a' && w<='z') || (w>='A' && w<='Z'))
        {
            result[++d]=b[i];
        }
        else if(presedence(w)>presedence(mid[p]))
        {
            mid[++p]=w;
        }
        else if(presedence(w)==presedence(mid[p]))
        {
            result[++d]=mid[p];
            mid[p]=w;
        }
        else
        {
            for(int j=0; presedence(w)<presedence(mid[p]) || presedence(w)==presedence(mid[p]); j++)
            {
                result[++d]=mid[p--];
            }
            mid[++p]=w;
        }
    }
    for(int i=p; i>0; i--)
    {
        result[++d]=mid[i];
    }
    result[++d]='\0';
    cout<<endl<<"prefix: "<<strrev(result);
}

int main()
{
    char a[10];
    cout<<"enter an infix expression: ";
    cin>>a;
    infixtopostfix(a);
    infixtoprefix(a);
    return 0;
}
