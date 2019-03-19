#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K;
    cin >> N >> K;
    int arr[N];
    
    for(int i = 0; i < N; i++)
        cin >> arr[i];
    
    sort(arr,arr+N);
    int vsetCount = 0;

    for(int i = 0; i < N-1; i++)
    {
        for(int j = i+1; j < N; j++)
        {
            int diff = arr[j] - arr[i];
            if(diff >= K)
            {
                vsetCount += N-j;
                break;
            }
        }
    }

    cout << vsetCount << '\n';
}