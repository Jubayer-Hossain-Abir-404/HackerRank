#include <bits/stdc++.h>

using namespace std;


int getTripletSum(int i,int a[], int n,int r)
{
    int c=0;
    for(int j=i+1;j<n;j++)
    {
        if(a[j]/a[i]==r && a[j]%a[i]==0)
        {
            c++;
        }
    }
    return c;
}



int main()
{
    int n,r;
    cin>>n>>r;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr + n);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            if(arr[j]/arr[i]==r && arr[j]%arr[i]==0)
            {
                int c =getTripletSum(j,arr,n,r);
                sum+=c;
            }
        }
    }
    cout<<sum;
    return 0;
}
