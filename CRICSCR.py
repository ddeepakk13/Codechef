#AC
No_samples = int(input())
l = []

for _ in range(No_samples):
    sample = [int(x) for x in input().split()]
    l.append(sample)
R = W = 0
possible = 1
flag = 0
for runs,wickets in l:
    if runs < R or wickets < W:
        possible = 0
        break
    elif flag == 1 and wickets == 10:
        possible = 0
        break
    elif wickets == 10:
        flag = 1
    R = runs
    W = wickets

print("YES" if possible else "NO")
    