#include <bits/stdc++.h>

using namespace std;

int countZero(int c[], int n)
{
    int countZ = -1;
    for(int i =0;i<n;i++){
        if(c[i]==0)
        {
            countZ++;
        }
    }
    return countZ;
}



int consecutive3(int c[], int n)
{
    int countConsectutive3=0,i=0;
    while(i<3)
    {
        if(c[n]==0)
        {
            countConsectutive3++;
        }
        n++;
        i++;
    }
    if(countConsectutive3==3)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}




int main()
{
    int n,cons3Result=0, j=0,temp;
    cin >> n;
    int c[n];
    for(int i =0;i<n;i++)
    {
        cin>> c[i];
    }
    while(j<n-2)
    {
        temp = cons3Result;
        cons3Result = cons3Result + consecutive3(c,j);
        if(cons3Result > temp)
        {
            j+=2;
        }
        else
        {
            j++;
        }
    }
    int result = countZero(c, n) - cons3Result;
    cout<<result;
}
