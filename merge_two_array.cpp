// C++ program to merge two sorted array in ascending order
#include<iostream>
using namespace std;
int main()
{
   int a[100], b[100], c[200], size1, size2, size, i, j, k;
    cout<<"Enter Array 1 Size : ";
    cin>>size1;
    cout<<"Enter Array 1 Elements : ";
    for(i=0; i<size1; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter Array 2 Size : ";
    cin>>size2;
    cout<<"Enter Array 2 Elements : ";
    for(i=0; i<size2; i++)
    {
        cin>>b[i];
    }
    for(i=0; i<size1; i++)
    {
        c[i] = a[i];
    }
    size = size1 + size2;
    for(i=0, k=size1; k<size && i<size2; i++, k++)
    {
        c[k] = b[i];
    }
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(c[i] > c[j])
            {
                int temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
    cout<<"Merged Array : ";
    for(i=0; i<size; i++)
    {
        cout<<c[i]<<" ";
    }
    cout<<endl;
    return 0;
}
