#include <bits/stdc++.h>

using namespace std;


int getMaxLength(int arrayOfMatch[], int countForMatch, string s2)
{
    for(int i=0;i<countForMatch;i++)
    {
        cout<< "Before Sort: "<<arrayOfMatch[i]<<endl;
    }

    //remove duplicate array
    // temporary list to store all the unique elements
	vector<int> temp;

	// iterate each element of arr[]
	for (int i = 0; i < countForMatch; ++i) {

		// checking if there exist an element arr[j] ( j < i )
		// that is equal to arr[i]
		int flag = 1;
		for (int j = 0; j < i; ++j) {
			if (arrayOfMatch[j] == arrayOfMatch[i]) {
				flag = 0;
				break;
			}
		}

		// flag == 0 means arr[i] is repeated
		// flag == 1 means that no element that appears
		// on left side of arr[i] is equal to arr[i]
		// therefore, we push arr[i] to temp
		if (flag)
			temp.push_back(arrayOfMatch[i]);

	}

	// after the completion of above loop
	// temp will contain all the unique elements in arr[] without repetition
	// size of temp may be smaller than the original array
	// so we set n = temp.size() and overwrite arr[] with temp
	countForMatch = temp.size();
	for (int i = 0; i < countForMatch; ++i)
		arrayOfMatch[i] = temp[i];

    for(int i=0;i<countForMatch;i++)
    {
        cout<< "Remove Duplicate Array:"<<arrayOfMatch[i]<<endl;
    }

//    collect substring
    int countRemovedChar=0, pushToString[1000];
    for(int i =0;i<countForMatch;i++)
    {
        int c= 0;
        for(int j=i+1;j<countForMatch;j++)
        {
            if(arrayOfMatch[i] > arrayOfMatch[j])
            {
                c++;
            }
        }
        if(c==0)
        {
            pushToString[countRemovedChar]=arrayOfMatch[i];
            countRemovedChar++;
        }
    }

//    remove duplicate substring
    string st = "", newString;

    for(int i=0;i<countRemovedChar;i++)
    {
        cout<<"Removed one or two character"<<pushToString[i]<<endl;

    }

    for(int i =0;i<countRemovedChar;i++)
    {
        cout<<"After removing duplicate Array:"<<pushToString[i]<<endl;
        st = st + s2[pushToString[i]];
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
    int arrayOfMatch[1000]={-1},countForMatch=0;
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

