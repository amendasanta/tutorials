n=int(input())
for i in range(n):
    s=input()
    if len(s)%2==0:
        a=s[:len(s)//2]
        b=s[len(s)//2:]
    else:
        a=s[:len(s)//2]
        b=s[len(s)//2+1:]
    if sorted(a)==sorted(b):
        print("YES")
    else:
        print("NO")
