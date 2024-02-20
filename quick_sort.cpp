#include<iostream>
using namespace std;

void quicksort(int a[],int s, int e)
{
    int i=s,j=e-1,p=a[s],c=0;
    if(s!=e)
    {
        while(c==0)
        {
            if(a[i]<=p)
                i++;
            else if(a[j]>=p)
                j--;
            else if(i<j)
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            else
            {
                int temp=a[s];
                a[s]=a[j];
                a[j]=temp;
                c=1;
            }
        }
        quicksort(a,s,j-1);
        quicksort(a,j+1,e);
    }
}

int main()
{
    int a[100],n;
    cout<<"enter the size of array : ";
    cin>>n;
    cout<<endl<<"enter an array : ";
    for(int i=0; i<n; i++)
        cin>>a[i];
    quicksort(a,0,n);
    cout<<"Sorted array : ";
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    return 0;
}
