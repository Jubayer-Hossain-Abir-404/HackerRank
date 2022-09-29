#include <bits/stdc++.h>

using namespace std;

long long int removeDuplicateArray(long long int arr[], long long int n)
{
    // Return, if array is empty or contains a single
    // element
    if (n == 0 || n == 1)
        return n;

    long long int temp[n];

    // Start traversing elements
    long long int j = 0;
    // If current element is not equal to next element
    // then store that current element
    for (long long int i = 0; i < n - 1; i++)
        if (arr[i] != arr[i + 1])
            temp[j++] = arr[i];

    // Store the last element as whether it is unique or
    // repeated, it hasn't stored previously
    temp[j++] = arr[n - 1];

    // Modify original array
    for (long long int i = 0; i < j; i++)
        arr[i] = temp[i];

    return j;
}

long long int removeMultipleElementsConditonalWise(long long int arr[],long long int arrComp, long long int n, bool isTrue)
{
    int j = 0;
    for (long long int i = 0; i < n; ++i)
    {
        if(isTrue==true)
        {
            if (arr[i] >= arrComp)
            {
                arr[j++] = arr[i];
            }
        }
        else
        {
            if (arr[i] <= arrComp)
            {
                arr[j++] = arr[i];
            }
        }
    }
    // update the size!
    n = j;
    return n;
}

long long int multiplicationForTripleSum(long long int value, long long int arr[], long long int n)
{
    int c= 0;
    for(int i=0;i<n;i++)
    {
        if(value >= arr[i])
        {
            c++;
        }
    }
    return c;
}



int main()
{
    long long int lenA, lenB, lenC;
    cin>>lenA>>lenB>>lenC;
    long long int a[lenA], b[lenB], c[lenC];
    for(long long int i=0;i<lenA;i++)
    {
        cin>>a[i];
    }
    for(long long int i=0;i<lenB;i++)
    {
        cin>>b[i];
    }
    for(long long int i=0;i<lenC;i++)
    {
        cin>>c[i];
    }
    lenA = removeDuplicateArray(a,lenA);
    lenB = removeDuplicateArray(b,lenB);
    lenC = removeDuplicateArray(c,lenC);

    sort(a, a + lenA);
    sort(b, b + lenB);
    sort(c, c + lenC);

    lenB = removeMultipleElementsConditonalWise(b,c[0],lenB, true);
    lenA = removeMultipleElementsConditonalWise(a,b[lenB-1],lenA, false);
    long long int sum=0;
    for(long long int i=0;i<lenB;i++)
    {
        sum = sum  + multiplicationForTripleSum(b[i],a,lenA) * multiplicationForTripleSum(b[i],c,lenC);
    }

    cout<<sum;

    return 0;
}
