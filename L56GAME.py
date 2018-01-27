#!python3

T = int(input())

for _ in range(T):
    N = int(input())
    sequence = [int(i) for i in input().split()]
    
    #keep track of number odd numbers in sequence
    oddCount = 0
    
    for element in sequence:
        if element%2 == 1:
            oddCount+=1
    
    if N == 1 or oddCount%2 == 0: print(1)
    else: print(2)
        