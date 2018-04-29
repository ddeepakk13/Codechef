T = int(input())
for _ in range(T):
    s = input().split('0')
    seg = len(s)
    print('YES' if seg == 1 else 'NO')