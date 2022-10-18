#include <bits/stdc++.h>

using namespace std;

//first count frequency
//then string concatination
//then sort concatenated string
//then remove duplicate string
//then traverse through the distinct string of characters and get the difference
//if the diff is more than return false else return true

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

string concatinateString(string s, string t)
{
    string st;
    st=s + t;
    return st;
}

string sortString(string str)
{
    sort(str.begin(), str.end());
    return str;
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

bool equivalentString(string s, string t)
{
//    cout<< "1st step"<<endl;
    int *a = countFrequency(s);
    int *b = countFrequency(t);

//    cout<< "2nd Step"<<endl;
    string concatString = concatinateString(s,t);

//    cout<< "Third Step"<<endl;
    string sortSt = sortString(concatString);

//    cout<< "Fourth Step"<<endl;
    int i=0;
    string rmDuplicate = "";
    while(sortSt[i]!='\0')
    {
        rmDuplicate = rmDuplicate + sortSt[i];
        int index = removeDuplicateIndex(sortSt, sortSt.length(), i, sortSt[i]);
        i= index;
    }
    i=0;
//    cout<< "Fifth Step"<<endl;
    static int j=0;
    while(rmDuplicate[i]!='\0')
    {
        int diff = abs(a[rmDuplicate[i]] - b[rmDuplicate[i]]);
        if(diff>3)
        {
            delete[] a;
            delete[] b;
            return false;
        }
        i++;
    }

    delete[] a;
    delete[] b;
    return true;
}



int main()
{
    int n;
    cin>>n;
    string s[n],t[n];

    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        cin>>t[i];
    }

    for(int i=0;i<n;i++)
    {
        bool result = equivalentString(s[i],t[i]);
        if(result)
        {
            cout<<"True"<<endl;
        }
        else
        {
            cout<<"False"<<endl;
        }
    }
    return 0;
}
