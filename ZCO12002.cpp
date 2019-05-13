//doesn't work

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /*---------- Boiler code ----------*/
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /*---------------------------------*/

    int N,X,Y;
    cin >> N >> X >> Y;
    int S[N], E[N];
    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
        cin >> E[i];
    }
    int V[X];
    for (int i = 0; i < X; i++)
        cin >> V[i];
    int W[Y];
    for (int i = 0; i < Y; i++)
        cin >> W[i];
    sort(V,V+X);
    sort(W,W+Y);
    int minTime = 100000;
    for(int i = 0; i < N; i++)
    {
        int optimalV = 0;
        for (int j = 0; j < X; j++)
        {
            if (V[j] > S[i]) break;
            optimalV = V[j];
        }
        int optimalW = 100001;
        for (int j = Y-1; j >= 0; j--)
        {
            if (W[j] < E[i]) break;
            optimalW = W[j];
        }
        if(optimalV==0 ||optimalW==100001) break;  // No possible wormholes to take this test
        minTime = min(minTime, optimalW - optimalV +1);
    }
    cout << minTime;
}