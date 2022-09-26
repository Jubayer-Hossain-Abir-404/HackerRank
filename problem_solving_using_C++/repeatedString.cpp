#include <bits/stdc++.h>

using namespace std;


long int countCharFromString(string s, long int l)
{
    int c =0;
    for(int i =0; i<l; i++){
        if(s[i]== 'a')
        {
            c++;
        }
    }
    return c;
}

long int getRepeatedString(string s, long int n)
{
    long int q = n / s.length();
    long int r = n % s.length();
    long int ans = q * countCharFromString(s, s.length()) + countCharFromString(s, r);
    return ans;
}




int main()
{
    string s;
    long int n;
    cin>> s >> n;
    long int result = getRepeatedString(s,n);
    cout<< result;

    return 0;
}
