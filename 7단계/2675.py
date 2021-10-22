n=int(input())

for _ in range(n):
    num, st = input().split()
    for i in st:
        print(i*int(num), end="")
    print()
