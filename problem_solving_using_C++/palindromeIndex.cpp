#include <bits/stdc++.h>

using namespace std;

int checkPalindromeFunc(string s)
{
    int medianString = s.length()/2;
    int totalLength = s.length();
    int countPalindrome =0;
    for(int i=0;i<medianString;i++)
    {
        if(s[i]==s[totalLength-i-1])
        {
            countPalindrome++;
        }
    }
    if(medianString == countPalindrome)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

int removeCharForPalindrome(string s)
{
    int medianString = s.length()/2;
    int totalLength = s.length();
    int returnForFunction,i;
    for(i=0;i<medianString;i++)
    {
        string tempString = "";
        if(s[i]!=s[totalLength-i-1])
        {
            for(int j=0;j<totalLength;j++)
            {
                if(j!=i)
                {
                    tempString= tempString+s[j];
                }
            }
            returnForFunction = checkPalindromeFunc(tempString);
            if(returnForFunction==-1)
            {
                return i;
            }
            else
            {
                tempString = "";
                for(int j=0;j<totalLength;j++)
                {
                    if(j!=totalLength-i-1)
                    {
                        tempString= tempString+s[j];
                    }
                }
                returnForFunction = checkPalindromeFunc(tempString);
                if(returnForFunction==-1)
                {
                    return totalLength-i-1;
                }
            }
        }
    }
    return i;
}




int main()
{
    int num;
    cin>>num;
    string s[num];
    for(int i=0;i<num;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<num;i++)
    {
        int checkPalindrome = checkPalindromeFunc(s[i]);
        if(checkPalindrome==-1)
        {
            cout<<-1<<endl;
        }
        else
        {
            int ans = removeCharForPalindrome(s[i]);
            cout<<ans<<endl;
        }
    }
    return 0;
}
