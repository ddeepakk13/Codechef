T = int(input())

for _ in range(T):
    N = int(input())
    l = [int(i) for i in input().split()]
    l.sort()
    L = [l[i+1] - l[i] for i in range(N - 1)]
    print(min(L))