#include <bits/stdc++.h>

using namespace std;



int reduceValue(string s)
{
    int n= s.length();
    int halfLen = s.length() / 2;
    int sum=0;
    for(int i=0;i<halfLen;i++)
    {
        if(s[i]!=s[n-i-1])
        {
            int first = s[i] + 0;
            int second = s[n-i-1] + 0;
            int diff = abs(first-second);
            sum+=diff;
        }
    }
    return sum;
}

void solveMystery(string s[], int q)
{
    for(int i=0;i<q;i++)
    {
        int sum=0;
        int checkPal = reduceValue(s[i]);
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
