#include<bits/stdc++.h>
using namespace std;

class queue1
{
public:
    int a[50],first=-1,last=-1;
    void isert(int x)
    {
            if(last==49)
                cout<<endl<<"queue is overflow";
            else if(last==-1)
            {
                a[++last]=x;
                first=last;
            }
            else
                a[++last]=x;
    }
    void del()
    {
        if(first==last+1 || first==-1)
            cout<<endl<<"queue is underflow";
        else
        {
            a[first]='\0';
            first++;
        }
    }

    void display()
    {
        if(first>last || first==-1)
            cout<<endl<<"no elements found in queue";
        else
        {
            cout<<endl<<"queue is : ";
            for(int i=first;i<=last;i++)
                cout<<a[i]<<" ";
        }
    }
};
int main()
{
    queue1 q;
    q.isert(1);
    q.isert(2);
    q.isert(3);
    q.isert(4);
    q.display();
    q.del();
    q.del();
    q.display();
    return 0;
}
