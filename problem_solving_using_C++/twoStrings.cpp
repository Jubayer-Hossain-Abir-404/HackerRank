#include <bits/stdc++.h>

using namespace std;

bool checkSubstring(char ch, string s)
{
    for(int i=0;i<s.length();i++)
    {
        if(ch==s[i])
        {
            return true;
        }
    }
    return false;
}

string twoString(string s, string t)
{
    for(int i=0;i<s.length();i++)
    {
         if(checkSubstring(s[i], t))
         {
             return "YES";
         }
    }
    return "NO";
}





int main()
{
    int p;
    cin>>p;
    string s1[p], s2[p];
    for(int i=0;i<p;i++)
    {
        cin>>s1[i];
        cin>>s2[i];
    }
    for(int i=0;i<p;i++)
    {
        string result = twoString(s1[i],s2[i]);
        cout<<result<<endl;
    }

    return 0;
}
