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

int countCharacter(string s, char ch)
{
    int count_char = 0;
    for(int i=0;i<s.length();i++)
    {
        if(ch==s[i])
        {
            count_char++;
        }
    }
    return count_char;
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
    if(s.length()==temp.length())
    {
        if(s.length()==2)
        {
            return "YES";
        }
        else
        {
            return "NO";
        }
    }
    int countOddCharacter =0;
    for(int i=0; i< temp.length();i++)
    {
        int getCount = countCharacter(s, temp[i]);
        if(getCount%2!=0)
        {
           countOddCharacter++;
        }
        if(countOddCharacter==2)
        {
            return "NO";
        }
    }
    return "YES";
}



int main()
{
    string s;
    cin>>s;
    string result = gameOfThrones(s);
    cout<< result;
    return 0;
}

