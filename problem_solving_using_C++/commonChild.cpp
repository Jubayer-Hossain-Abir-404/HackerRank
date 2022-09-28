#include <bits/stdc++.h>

using namespace std;

int getMaxLength(int arrayOfMatch[], int countForMatch)
{
    int countMaxLength = 1, maxLength=-1;
    for(int i=0;i<countForMatch-1;i++)
    {
        if(arrayOfMatch[i]<arrayOfMatch[i+1])
        {
            countMaxLength++;
            if(countMaxLength>maxLength)
            {
                maxLength = countMaxLength;
            }
        }
        else
        {
            countMaxLength=1;
        }

    }
    return maxLength;
}

int getCommonChild(string s1, string s2)
{
    int n= s1.length();
    int arrayOfMatch[100],countForMatch=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(s1[i]==s2[j])
            {
                arrayOfMatch[countForMatch] = j;
                countForMatch++;
                break;
            }
        }
    }
    if(countForMatch==0)
    {
        return 0;
    }
    else
    {
        return getMaxLength(arrayOfMatch, countForMatch);
    }
}

int main()
{
    string s1, s2;
    cin>>s1;
    cin>>s2;
    int result = getCommonChild(s1,s2);
    cout<<result;

    return 0;
}
