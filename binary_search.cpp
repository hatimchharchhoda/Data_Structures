#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a[10],b,c=0,s,k=0;
    cout<<"enter the size of array : ";
    cin>>s;
    int l=s-1;
    cout<<"enter an array : ";
    for(int i=0;i<s;i++)
        cin>>a[i];
    sort(a,a+s);
    cout<<"sorted array : ";
    for(int i=0;i<s;i++)
        cout<<a[i]<<" ";
    cout<<endl<<"enter value to search : ";
    cin>>b;
    while(k==0)
    {
        s=(c+l)/2;
        if(l<c)
        {
            cout<<"element not found";
            k=1;
        }
        else if(a[s]>b)
            l=s-1;
        else if(a[s]<b)
            c=s+1;
        else if(a[s]==b)
        {
            cout<<"element "<<a[s]<<" is found on position "<<s+1;
            k=1;
        }
    }
    return 0;
}
