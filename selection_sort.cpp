#include<iostream>
using namespace std;

int main()
{
    int n,c=0;
    cout<<"enter the size of array : ";
    cin>>n;
    int no[n];
    cout<<endl<<"enter an array : ";
    for(int i=0; i<n; i++)
    {
        cin>>no[i];
    }
    while(c<n-1)
    {
        for(int i=n-1; i>=1; i--)
        {
            if(no[i]<no[i-1])
            {
                int temp=no[i-1];
                no[i-1]=no[i];
                no[i]=temp;
            }
        }
        c++;
    }
    cout<<endl<<"sorted array is : ";
    for(int i=0; i<n; i++)
        cout<<no[i]<<" ";
    return 0;
}
