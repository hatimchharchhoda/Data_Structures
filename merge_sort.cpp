#include<iostream>
#include<vector>
using namespace std;

void merg(vector<int>&v,int l,int mid,int r)
{
    int an=mid-l+1;
    int bn=r-mid;
    vector<int> a(an);
    vector<int> b(bn);
    for(int i=0; i<an; i++)
        a[i]=v[l+i];
    for(int j=0; j<bn; j++)
        b[j]=v[mid+1+j];
    int i=0,j=0,k=l;
    while(i<an && j<bn)
    {
        if(a[i]<b[j])
            v[k++]=a[i++];
        else
            v[k++]=b[j++];
    }
    while(i<an)
    {
        v[k++]=a[i++];
    }
    while(j<bn)
    {
        v[k++]=b[j++];
    }
}
void mergesort(vector <int>&v, int l, int r)
{
    if(l>=r)
        return;
    int mid=(l+r)/2;
    mergesort(v,l,mid);
    mergesort(v,mid+1,r);
    merg(v,l,mid,r);
}

int main()
{
    vector<int>v={1,4,2,3,5};
    mergesort(v,0,4);
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
    return 0;
}
