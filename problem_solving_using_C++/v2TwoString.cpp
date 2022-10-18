#include <bits/stdc++.h>

using namespace std;

string sortString(string str)
{
    sort(str.begin(), str.end());
    return str;
}

bool compareDistinctCharacter(char ch1, char ch2)
{
    if(ch1<ch2)
    {
        return false;
    }
    return true;
}

int removeDuplicateIndex(string s, int n, int index, char ch)
{
    int i;
    for(i=index;i<n;i++)
    {
        if(ch!=s[i])
        {
            break;
        }
    }
    return i;
}

int * countFrequency(string s)
{
    int *a= new int[125];
    for(int i=0;i<125;i++)
    {
        a[i] =0;
    }
    int i=0;
    while(s[i]!='\0')
    {
        a[s[i]]++;
        i++;
    }
    return a;
}


string twoString(string s, string t)
{
    s = sortString(s);
    t = sortString(t);

    bool compareDistinctCh = compareDistinctCharacter(s[s.length()-1], t[0]);

    if(!compareDistinctCh)
    {
        return "NO";
    }

    int i=0;
    string rmDuplicate = "";
    while(s[i]!='\0')
    {
        rmDuplicate = rmDuplicate + s[i];
        int index = removeDuplicateIndex(s, s.length(), i, s[i]);
        i= index;
    }
    i=0;
    int *b = countFrequency(t);

    while(rmDuplicate[i]!='\0')
    {
        if(b[rmDuplicate[i]]>0)
        {
            delete[] b;
            return "YES";
        }
        i++;
    }

    delete[] b;
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
