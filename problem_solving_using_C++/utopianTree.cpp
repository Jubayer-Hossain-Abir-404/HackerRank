#include <bits/stdc++.h>

using namespace std;

int getUtopianTreeHeight(int n)
{
    int ans = 1;
    for(int i = 1 ; i<=n ; i++)
    {
        if(i%2==0)
        {
            ans = ans + 1;
        }
        else
        {
            ans = ans * 2;
        }

    }
    return ans;
}


int main()
{
    int t, n[60];
    cin >> t;
    for(int i =0; i<t; i++)
    {
        cin >> n[i];
    }
    for(int i =0; i<t; i++)
    {
        int result = getUtopianTreeHeight(n[i]);
        cout<< result<<endl;
    }
    return 0;
}
