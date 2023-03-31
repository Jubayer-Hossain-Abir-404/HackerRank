#include <bits/stdc++.h>

using namespace std;

bool checkDuplicate(string s, char ch)
{
    for(int i=0;i<s.length();i++)
    {
        if(ch==s[i])
        {
            return false;
        }
    }
    return true;
}

string gameOfThrones(string s)
{
    string temp = "";
    for(int i=0;i<s.length();i++)
    {
        if(checkDuplicate(temp, s[i]))
        {
            temp+= s[i];
        }
    }
    return temp;
}



int main()
{
    string s;
    cin>>s;
    string result = gameOfThrones(s);
    cout<< result;
    return 0;
}

