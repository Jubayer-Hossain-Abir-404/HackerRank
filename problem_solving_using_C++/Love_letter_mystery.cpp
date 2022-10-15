#include <bits/stdc++.h>

using namespace std;

int checkPalindrome(string s)
{
    int n= s.length();
    int halfLen = s.length() / 2;
    int c=0;
    for(int i=0;i<halfLen;i++)
    {
        if(s[i]==s[n-i-1])
        {
            c++;
        }
    }
    if(c==halfLen)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void solveMystery(string s[], int q)
{
    for(int i=0;i<q;i++)
    {
        int sum=0;
        int checkPal = checkPalindrome(s[i]);
        sum+=checkPal;
        cout<<sum<<endl;
    }
}

int main()
{
    int q;
    cin>>q;
    string s[q];
    for(int i=0;i<q;i++)
    {
        cin>>s[i];
    }
    solveMystery(s,q);
    return 0;
}
