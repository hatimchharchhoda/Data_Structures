#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter an square of matrix : ";
    cin>>n;
    int a[n][n],b[n][n],c[n][n];
    cout<<endl<<"enter matrix A: ";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cin>>a[i][j];
    }
    cout<<endl<<"enter matrix B: ";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cin>>b[i][j];
    }
    cout<<endl<<"matrix A: "<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl<<"matrix B: "<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<b[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl<<"addition of A+B: "<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<a[i][j]+b[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl<<"subtraction of A-B: "<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<a[i][j]-b[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl<<"transpose of A: "<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<a[j][i]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl<<"transpose of B: "<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<b[j][i]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl<<"multiplication of A*B: "<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            c[i][j]=0;
            for(int k=0; k<n; k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
            cout<<c[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}
