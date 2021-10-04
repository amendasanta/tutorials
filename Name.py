

for _ in range(int(input())):

    n = int(input())

    a = [tuple(map(int, input().strip().split())) for i in range(n)]

    s = sum(map(lambda x:x[0]*((x[2]/100)**2)*x[1],a))

    print(s)

