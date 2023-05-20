//C++ program to separate even and odd array elements in two separate array
#include<iostream>
using namespace std;
int main()
{
    int a[100],even[100],odd[100],i,size;
    cout<<"Enter Array Size : ";
    cin>>size;
    cout<<"Enter Array Elements : "<<endl;
    for(i=0;i<size;i++)
    {
        cout<<"Enter element "<<i+1<<" : ";
        cin>>a[i];
    }
    cout<<"Even Array : ";
    for(i=0;i<size;i++)
    {
        if(a[i]%2==0)
        {
            cout<<a[i]<<" ";
        }
    }
    cout<<endl;
    cout<<"Odd Array : ";
    for(i=0;i<size;i++)
    {
        if(a[i]%2!=0)
        {
            cout<<a[i]<<" ";
        }
    }
    cout<<endl;
    return 0;
}
