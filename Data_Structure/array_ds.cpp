#include <bits/stdc++.h>

using namespace std;

int* reverseArray(int* arr, int n)
{
    for(int i=0;i<n/2;i++)
    {
        int temp = arr[n-i-1];
        arr[n-i-1] = arr[i];
        arr[i] = temp;
    }
    return arr;
}

int main()
{
    int n;
    cin>>n;
    int A[n];
    int* ptr;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    ptr = reverseArray(A, n);
    for(int i=0;i<n;i++)
    {
        cout<< ptr[i]<< " ";
    }
    return 0;
}
