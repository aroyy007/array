//C program to find determinant of a matrix
#include<iostream>
using namespace std;
int main()
{
    int a[3][3],i,j;
    cout<<"Enter 3x3 matrix : "<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"Enter element "<<i+1<<","<<j+1<<" : ";
            cin>>a[i][j];
        }
    }
    cout<<"Matrix is : "<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    int det=a[0][0]*(a[1][1]*a[2][2]-a[1][2]*a[2][1])-a[0][1]*(a[1][0]*a[2][2]-a[1][2]*a[2][0])+a[0][2]*(a[1][0]*a[2][1]-a[1][1]*a[2][0]);
    cout<<"Determinant of matrix is : "<<det;
    return 0;
}
