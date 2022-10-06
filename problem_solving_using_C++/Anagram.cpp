#include <bits/stdc++.h>

using namespace std;

string removeDuplicate(string s)
{
    string str;
    int len = s.length();

    // loop to traverse the string and
    // check for repeating chars using
    // IndexOf() method in Java
    for(int i = 0; i < len; i++)
    {

        // character at i'th index of s
        char c = s[i];

        // If c is present in str, it returns
        // the index of c, else it returns npos
        auto found = str.find(c);
        if (found == std::string::npos)
        {

            // Adding c to str if npos is returned
            str += c;
        }
    }
    return str;
}

int anagram(string sub1, string sub2)
{
    int arr1[122]={0},arr2[122]={0},i=0;



    while(sub1[i]!='\0')
    {
        int index = sub1[i]+0;
        arr1[index]++;
        i++;
    }
    i=0;
    while(sub2[i]!='\0')
    {
        int index= sub2[i]+0;
        arr2[index]++;
        i++;
    }

    i=0;
    int sum=0;
    sub1 = removeDuplicate(sub1);
    while(sub1[i]!='\0')
    {
        int index= sub1[i]+0;
        if(arr2[index]==0)
        {
            sum+=arr1[index];
        }
        else
        {
            int diff = arr1[index] - arr2[index];
            diff = abs(diff);
            sum+=diff;
        }
        i++;
    }



    return sum;
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
    for(int i=0;i<q;i++)
    {
        int totalLength = s[i].length();
        int half =s[i].length()/2;
        if(half*2!=totalLength)
        {
            cout<<-1<<endl;
        }
        else
        {
            string sub1="", sub2="";
            int j;
            for(j=0;j<half;j++)
            {
                sub1 =sub1 + s[i][j];
            }
            for(int k=j;k<totalLength;k++)
            {
                sub2 = sub2 + s[i][k];
            }
            int ans = anagram(sub1,sub2);
            cout<<ans<<endl;
        }
    }


    return 0;
}
