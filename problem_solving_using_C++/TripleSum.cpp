#include <bits/stdc++.h>

using namespace std;


int findTripleSum(int a[], int b[], int c[], int lenA, int lenB, int lenC)
{
    int countTriplets=0, flagSumA[100]={-1}, flagSumB[100]={-1}, flagSumC[100]={-1};
    for(int i=0;i<lenA;i++)
    {
        for(int j=0;j<lenB;j++)
        {
            for(int k=0;k<lenC;k++)
            {
                if(a[i]<= b[j] && b[j]>= c[k])
                {
                    if(countTriplets==0)
                    {
                        flagSumA[countTriplets]=a[i];
                        flagSumB[countTriplets]=b[j];
                        flagSumC[countTriplets]=c[k];
                        countTriplets++;
                    }
                    else
                    {
                        int countDuplicateSet = 0;
                        for(int l=0;l<countTriplets;l++)
                        {
                            if(a[i]==flagSumA[l] && b[j] ==flagSumB[l] &&c[k] == flagSumC[l] )
                            {
                                countDuplicateSet=1;
                                break;
                            }
                        }
                        if(countDuplicateSet==0)
                        {
                            flagSumA[countTriplets]=a[i];
                            flagSumB[countTriplets]=b[j];
                            flagSumC[countTriplets]=c[k];
                            countTriplets++;
                        }
                    }
                }
            }
        }
    }
    return countTriplets;
}


int main()
{
    int lenA, lenB, lenC;
    cin>>lenA>>lenB>>lenC;
    int a[lenA], b[lenB], c[lenC];
    for(int i=0;i<lenA;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<lenB;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<lenC;i++)
    {
        cin>>c[i];
    }

    int ans = findTripleSum(a,b,c,lenA,lenB,lenC);
    cout<<ans;

    return 0;
}
