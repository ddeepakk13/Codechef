//INOI1201

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct data
{
    int a, b, c;
    int sum;
};

bool comp(struct data i, struct data j)     // one with more tail load has preference
{
    return i.sum > j.sum;
}

int main()
{
    /*---------- Boiler code ----------*/
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /*---------------------------------*/
    int N;
    cin >> N;
    vector<struct data> v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i].a >> v[i].b >> v[i].c;
        v[i].sum = v[i].b + v[i].c;
    }
    sort(v.begin(), v.end(), comp);
    int maxTime = 0;
    int headTime = 0;
    for (int i = 0; i < N; i++)
    {
        int totalTime = headTime + v[i].sum + v[i].a;
        if (totalTime > maxTime) maxTime = totalTime;
        headTime += v[i].a;
    }
    cout << maxTime;
}