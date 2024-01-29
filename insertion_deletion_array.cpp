#include<iostream>
using namespace std;
void display(int a[100],int b)
{
    cout<<"your new array : ";
    for(int i=0;i<=b;i++)
        cout<<a[i]<<" ";
}

int main()
{
    int a[100],w,q;
    cout<<"enter an array size : ";
    cin>>w;
    cout<<"enter an array : ";
    for(int i=0;i<w;i++)
    {
        cin>>a[i];
    }
    cout<<"which kind of operation do you want to perform"<<endl<<"1. insert \n2. delete\noperation : ";
    cin>>q;
    switch(q)
    {
    case 1 :    int p,r;
                cout<<"which kind of operation you want to perferm \n1.insert at end\n2.insert at begin\n3.insert at middle\noperation : ";
                cin>>p;
                cout<<"input value : ";
                cin>>r;
                switch(p)
                {
                    case 1 :    a[w]=r;
                                display(a,w);
                                break;
                    case 2 :    for(int i=w;i>=0;i--)
                                    a[i]=a[i-1];
                                a[0]=r;
                                display(a,w);
                                break;
                    case 3 :    int k;
                                cout<<"enter position : ";
                                cin>>k;
                                for(int i=w;i>=k;i--)
                                    a[i]=a[i-1];
                                a[k-1]=r;
                                display(a,w);
                                break;
                    default :   cout<<"---please enter proper input---";
                                break;
                }
                break;
    case 2 :    cout<<"which kind of operation you want to perferm \n1.delete at end\n2.delete at begin\n3.delete at middle\noperation : ";
                cin>>p;
                switch(p)
                {
                    case 1 :    cout<<"your new array : ";
                                for(int i=0;i<w-1;i++)
                                    cout<<a[i]<<" ";
                                break;
                    case 2 :    cout<<"your new array : ";
                                for(int i=1;i<w;i++)
                                    cout<<a[i]<<" ";
                                break;
                    case 3 :    int k;
                                cout<<"enter position : ";
                                cin>>k;
                                cout<<"your new array : ";
                                for(int i=0;i<w;i++)
                                {
                                    if(i==k-1)
                                        cout<<"";
                                    else
                                        cout<<a[i]<<" ";
                                }
                                break;
                    default :   cout<<"---please enter proper input---";
                                break;
                }
                break;
    default :   cout<<"---please enter proper input---";
                break;
    }
    return 0;
}
