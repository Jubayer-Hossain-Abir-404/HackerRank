#include <bits/stdc++.h>

using namespace std;

int getIdxValue(char ch, int lastAnswer, int n)
{
    int x = int(ch - '0');
    return ((x ^ lastAnswer) % n);
}

void dynamicArray(int n, string queries[], int q)
{
    vector<vector<int>> arr(n);
    int lastAnswer = 0, c=0;
    int ans[q];

    for(int i=0;i<q;i++)
    {
        int idx = getIdxValue(queries[i][2], lastAnswer, n);
        if(queries[i][0]=='1')
        {
            arr[idx].push_back(int(queries[i][4] - '0'));
        }
        else
        {
            lastAnswer = arr[idx][int(queries[i][4] - '0') % arr[idx].size()];
            ans[c++] = lastAnswer;
        }
    }
    for(int i=0;i<c;i++)
    {
        cout<<ans[i]<<endl;
    }
}

int main()
{
    int n,q;
    cin >> n >>q;
    string queries[q];
    for(int i=0;i<q;i++)
    {
        getline(cin, queries[i]);
        while (queries[i].length() == 0)
        {
            getline(cin, queries[i]);
        }
    }
    dynamicArray(n, queries, sizeof(queries)/sizeof(queries[0]));
    return 0;
}

