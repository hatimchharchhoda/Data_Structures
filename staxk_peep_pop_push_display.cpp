#include<bits/stdc++.h>
#define n 50
using namespace std;

class stack1
{
public:
    int a[n];
    int top;

    stack1()
    {
        top=-1;
    }

    void push(int x)
    {
        if(top>=n-1)
            cout<<"stack is overflow";
        else
        {
            top=top+1;
            a[top]=x;
        }
    }
    void pop()
    {
        if(top<0)
            cout<<endl<<"stack is underflow";
        else
        {
            a[top]='\0';
            top=top-1;
        }
    }
    void peep()
    {
        if(top<0)
            cout<<endl<<"stack is empty";
        else
            cout<<endl<<a[top];
    }
    void display()
    {
        cout<<endl;
        for(int i=top; i>=0; i--)
            cout<<a[i]<<" ";
    }
};



int main()
{
    stack1 s;
    s.push(4);
    s.push(10);
    s.display();
    s.pop();
    s.pop();
    s.pop();
    s.display();
    return 0;
}
