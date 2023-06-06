//delete an element from an array
#include<bits/stdc++.h>
using namespace std;

int deleteElement(int a[], int size, int pos)
{
    for (int i = pos; i < size - 1; i++)
    {
        a[i] = a[i + 1];
    }

    return size - 1;
}

int main()
{
    int a[100], position, size;
    cout << "Enter Array size: ";
    cin >> size;

    cout << "Enter array elements: "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout << "a[" << i << "]: ";
        cin >> a[i];
    }

    cout << "Enter position to delete: ";
    cin >> position;

    size = deleteElement(a, size, position);

    cout << "After deletion: ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
