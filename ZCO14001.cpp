#include<iostream>
using namespace std;

int main()
{

    int N,H;
    cin >> N >> H;
    int stack[N];       //stack array
    for(int i = 0; i < N; i++) cin >> stack[i];
    int ptr = 0;     //stack array pointer
    bool boxOnCrane = 0;
    int command;
    cin >> command;
    while(command != 0)
    {
        switch(command)
        {
            case 1: if(ptr > 0) ptr--; break;
            case 2: if(ptr < N-1) ptr++; break;
            case 3: if( (!boxOnCrane) && (stack[ptr]!=0) ) {stack[ptr]--; boxOnCrane = 1;} break;
            case 4: if( (boxOnCrane) && (stack[ptr] < H) ) {stack[ptr]++; boxOnCrane = 0;} break;
        }
        cin >> command;
    }

    for(int i = 0; i<N; i++) cout << stack[i] << " ";
    cout << endl;

    
}