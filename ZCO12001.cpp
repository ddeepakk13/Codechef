#include<iostream>
#include<array>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    int arr[N];

    for(int i=0; i<N; i++)
    {
        cin >> arr[i];
    }

    int nesting{0}, maxNesting{0}, maxNestIndex{0};
    bool justMaxed{false};
    int charCount{0}, maxCharCount{0},maxCharIndex{0};

    for(int i= N-1; i>=0; i--)
    {
        switch(arr[i])
        {
            case 2 :
                nesting++;
                charCount++;
                if(nesting >= maxNesting)
                {
                    maxNesting = nesting;
                    justMaxed = true;
                    maxNestIndex = i;
                }
                break;

            case 1 :
                nesting--;
                charCount++;
                if(nesting == 0)
                {
                    if(justMaxed == true)
                    {
                        justMaxed = false;
                    }
                    if(charCount >= maxCharCount)
                    {
                        maxCharCount = charCount;
                        maxCharIndex = i+1;
                    }
                    charCount = 0;
                }
                break;

            default :
                break;
        }
    }

    cout << maxNesting << ' ' << maxNestIndex << ' ' << maxCharCount << ' ' << maxCharIndex << '\n'; 
}