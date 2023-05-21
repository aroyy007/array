//C++ program to left rotate an array
#include<iostream>
using namespace std;
int main()
{
    int i;
    cout<<"Enter Array Size : ";
    cin>>size;
    int a[size];
    cout<<"Enter Array Elements : "<<endl;
    for(i=0;i<size;i++)
    {
        cout<<"Enter element "<<i+1<<" : ";
        cin>>a[i];
    }
    int d;
    cout<<"Enter number of times to rotate : ";
    cin>>d;
    cout<<"Array after left rotation : ";
    for(i=0;i<d;i++)
    {
        int temp=a[0],j;
        for(j=0;j<size-1;j++)
        {
            a[j]=a[j+1];
        }
        a[size-1]=temp;
    }
    cout<<"Array after left rotation : ";
    for(i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
