#include<iostream>
using namespace std;

int main()
{
    int n,c=0;
    cout<<"enter the size of array : ";
    cin>>n;
    int a[n];
    cout<<"enter array : ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        int k=i,temp=a[i];
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                a[i]=a[j];
                k=j;
            }
        }
        a[k]=temp;

    }
    cout<<"sorted array : ";
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
