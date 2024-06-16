#include <bits/stdc++.h>
using namespace std;

int getMinCost(vector<int> &arr)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    int cost = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        pq.push(arr[i]);
    }

    while (pq.size() >= 2)
    {
        int first = pq.top();
        pq.pop();
        int second = pq.top();
        pq.pop();

        cost += first + second;

        pq.push(first + second);
    }

    return cost;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    int cost = getMinCost(arr);

    cout << cost << endl;

    return 0;
}
