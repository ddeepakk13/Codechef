T = int(input())
for _ in range(T):
    N,K = [int(x) for x in input().split()]
    s = [int(x) for x in input().split()]
    possible = 0
    for i in s:
        if i <= K:
            possible = 1
        elif i % K == 0:
            while i % K == 0:
                i = i // K
            if i <= K:
                possible = 1
                
    if possible:
        print("YES")
    else:
        print("NO")