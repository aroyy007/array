//insert an element in an array
#include<bits/stdc++.h>
using namespace std;
int insert_ls(int a[],int size,int pos,int value)
{
    size++;

    for(int i=size;i>=pos;i--)
    {
        a[i+1]=a[i]; //a[i] input value shift to a[i+1]
    }

    //another way
    /*for(int i=size-1;i>=pos;i--)
    {
        a[i]=a[i-1];
    }
    */

    a[pos]=value;
    return size;
}
int main()
{
    int a[100],size,pos,value;

    cout<<"Enter the size of the array: ";
    cin>>size;

    for(int i=0;i<size;i++)
    {
        cout<<"Enter a["<<i<<"]: ";
        cin>>a[i];
    }

    cout<<"Enter the position and value: ";
    cin>>pos>>value;

    size=insert_ls(a,size,pos,value);

    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
