#include <bits/stdc++.h>

using namespace std;



int removeDuplicates(int arr[], int n)
{
    // Return, if array is empty or contains a single
    // element
    if (n == 0 || n == 1)
        return n;

    int temp[n];

    // Start traversing elements
    int j = 0;
    // If current element is not equal to next element
    // then store that current element
    for (int i = 0; i < n - 1; i++)
        if (arr[i] != arr[i + 1])
            temp[j++] = arr[i];

    // Store the last element as whether it is unique or
    // repeated, it hasn't stored previously
    temp[j++] = arr[n - 1];

    // Modify original array
    for (int i = 0; i < j; i++)
        arr[i] = temp[i];

    return j;
}






int getMaxLength(int arrayOfMatch[], int countForMatch, string s2)
{
    for(int i=0;i<countForMatch;i++)
    {
        cout<< "Before Sort: "<<arrayOfMatch[i]<<endl;
    }
    sort(arrayOfMatch, arrayOfMatch+countForMatch);

    string st = "", newString;

    for(int i=0;i<countForMatch;i++)
    {
        cout<<"sortArray:"<<arrayOfMatch[i]<<endl;

    }

    int getDuplicateFreeArray = removeDuplicates(arrayOfMatch, countForMatch);
    for(int i =0;i<getDuplicateFreeArray;i++)
    {
        cout<<"After removing duplicate Array:"<<arrayOfMatch[i]<<endl;
        st = st + s2[arrayOfMatch[i]];
    }
    cout<<st<<endl;
    bool alphabets[26];  // Assuming your string contains charactes between a-z only.
    memset(alphabets,false,26);
    for(int i=0;i<st.size();i++)
    {
        if(alphabets[st.at(i)-'a']==false)    // If that character was marked false i.e if it was not present in original
        {
            alphabets[st.at(i)-'a']=true;    // mark that character true
            newString.push_back(st.at(i));           // Insert that character in string p
        }
    }
    cout<<newString<<endl;
    return newString.length();
}




int getCommonChild(string s1, string s2)
{
    int n= s1.length();
    int arrayOfMatch[100]={-1},countForMatch=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(s1[i]==s2[j])
            {
                arrayOfMatch[countForMatch] = j;
                countForMatch++;
            }
        }
    }
    if(countForMatch==0)
    {
        return 0;
    }
    else
    {
        return getMaxLength(arrayOfMatch, countForMatch,s2);
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
