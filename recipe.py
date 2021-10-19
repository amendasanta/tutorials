try:
    n=int(input())
    for i in range(n):
        l=list(map(int,input().split()[1:]))
        p=min(l)
        while(p):
            if all([i%p==0 for i in l]):
                print(*[i//p for i in l])
                break
            p=p-1
except:
    pass
