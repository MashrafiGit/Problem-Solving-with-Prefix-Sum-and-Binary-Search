#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> runningSum(n);
    runningSum[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        runningSum[i] = runningSum[i - 1] + v[i];
    }

    for (int i = 1; i < n - 1; i++)
    {
        if (runningSum[i - 1] == runningSum[n - 1] - runningSum[i])
        {
            cout << i << " ";
        }
    }

    return 0;
}